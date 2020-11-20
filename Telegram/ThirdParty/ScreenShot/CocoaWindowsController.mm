/*
 Copyright (C) 2015 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 Handles UI interaction and retrieves window images.
 */

#import "CocoaWindowsController.h"

@interface WindowListApplierData : NSObject
{
}

@property (strong, nonatomic) NSMutableArray * outputArray;
@property int order;

@end

@implementation WindowListApplierData

-(instancetype)initWindowListData:(NSMutableArray *)array
{
    self = [super init];
    
    self.outputArray = array;
    self.order = 0;
    
    return self;
}

@end


@interface Controller ()
{
	
	CGWindowListOption listOptions;
	CGWindowListOption singleWindowListOptions;
	CGWindowImageOption imageOptions;
	CGRect imageBounds;
}

@property (strong) WindowListApplierData *windowListData;

@end


@implementation Controller

#pragma mark Basic Profiling Tools
// Set to 1 to enable basic profiling. Profiling information is logged to console.
#ifndef PROFILE_WINDOW_GRAB
#define PROFILE_WINDOW_GRAB 0
#endif

#if PROFILE_WINDOW_GRAB
#define StopwatchStart() AbsoluteTime start = UpTime()
#define Profile(img) CFRelease(CGDataProviderCopyData(CGImageGetDataProvider(img)))
#define StopwatchEnd(caption) do { Duration time = AbsoluteDeltaToDuration(UpTime(), start); double timef = time < 0 ? time / -1000000.0 : time / 1000.0; NSLog(@"%s Time Taken: %f seconds", caption, timef); } while(0)
#else
#define StopwatchStart()
#define Profile(img)
#define StopwatchEnd(caption)
#endif

#pragma mark Utilities

// Simple helper to twiddle bits in a uint32_t. 
uint32_t ChangeBits(uint32_t currentBits, uint32_t flagsToChange, BOOL setFlags);
inline uint32_t ChangeBits(uint32_t currentBits, uint32_t flagsToChange, BOOL setFlags)
{
	if(setFlags)
	{	// Set Bits
		return currentBits | flagsToChange;
	}
	else
	{	// Clear Bits
		return currentBits & ~flagsToChange;
	}
}


#pragma mark Window List & Window Image Methods

NSString *kAppNameKey = @"applicationName";	// Application Name & PID
NSString *kWindowOriginKey = @"windowOrigin";	// Window Origin as a string
NSString *kWindowSizeKey = @"windowSize";		// Window Size as a string
NSString *kWindowIDKey = @"windowID";			// Window ID
NSString *kWindowLevelKey = @"windowLevel";	// Window Level
NSString *kWindowOrderKey = @"windowOrder";	// The overall front-to-back ordering of the windows as returned by the window server

void WindowListApplierFunction(const void *inputDictionary, void *context);
void WindowListApplierFunction(const void *inputDictionary, void *context)
{
	NSDictionary *entry = (__bridge NSDictionary*)inputDictionary;
	WindowListApplierData *data = (__bridge WindowListApplierData*)context;
	
	// The flags that we pass to CGWindowListCopyWindowInfo will automatically filter out most undesirable windows.
	// However, it is possible that we will get back a window that we cannot read from, so we'll filter those out manually.
	int sharingState = [entry[(id)kCGWindowSharingState] intValue];
	if(sharingState != kCGWindowSharingNone)
	{
		NSMutableDictionary *outputEntry = [NSMutableDictionary dictionary];
		
		// Grab the application name, but since it's optional we need to check before we can use it.
		NSString *applicationName = entry[(id)kCGWindowOwnerName];
		if(applicationName != NULL)
		{
			// PID is required so we assume it's present.
			NSString *nameAndPID = [NSString stringWithFormat:@"%@ (%@)", applicationName, entry[(id)kCGWindowOwnerPID]];
			outputEntry[kAppNameKey] = nameAndPID;
		}
		else
		{
			// The application name was not provided, so we use a fake application name to designate this.
			// PID is required so we assume it's present.
			NSString *nameAndPID = [NSString stringWithFormat:@"((unknown)) (%@)", entry[(id)kCGWindowOwnerPID]];
			outputEntry[kAppNameKey] = nameAndPID;
		}
		
		// Grab the Window Bounds, it's a dictionary in the array, but we want to display it as a string
		CGRect bounds;
		CGRectMakeWithDictionaryRepresentation((CFDictionaryRef)entry[(id)kCGWindowBounds], &bounds);
		NSString *originString = [NSString stringWithFormat:@"%.0f/%.0f", bounds.origin.x, bounds.origin.y];
		outputEntry[kWindowOriginKey] = originString;
		NSString *sizeString = [NSString stringWithFormat:@"%.0f*%.0f", bounds.size.width, bounds.size.height];
		outputEntry[kWindowSizeKey] = sizeString;
		
		// Grab the Window ID & Window Level. Both are required, so just copy from one to the other
		outputEntry[kWindowIDKey] = entry[(id)kCGWindowNumber];
		outputEntry[kWindowLevelKey] = entry[(id)kCGWindowLayer];
		
		// Finally, we are passed the windows in order from front to back by the window server
		// Should the user sort the window list we want to retain that order so that screen shots
		// look correct no matter what selection they make, or what order the items are in. We do this
		// by maintaining a window order key that we'll apply later.
		outputEntry[kWindowOrderKey] = @(data.order);
		data.order++;
		
		[data.outputArray addObject:outputEntry];
	}
}

-(void)updateWindowList
{
	// Ask the window server for the list of windows.
	StopwatchStart();
    CFArrayRef windowList = CGWindowListCopyWindowInfo(kCGWindowListOptionOnScreenOnly | kCGWindowListExcludeDesktopElements, kCGNullWindowID);
    
    for (int i = 0; i < CFArrayGetCount(windowList); i++) {
        CFDictionaryRef ref = (CFDictionaryRef)CFArrayGetValueAtIndex(windowList, i);

        NSLog(@"%@", CFDictionaryGetValue(ref, kCGWindowBounds));
    }
    
	StopwatchEnd("Create Window List");
	
}

-(CFArrayRef)newWindowListFromSelection:(NSArray*)selection
{
	// Create a sort descriptor array. It consists of a single descriptor that sorts based on the kWindowOrderKey in ascending order
	NSArray * sortDescriptors = @[[[NSSortDescriptor alloc] initWithKey:kWindowOrderKey ascending:YES]];

	// Next sort the selection based on that sort descriptor array
	NSArray * sortedSelection = [selection sortedArrayUsingDescriptors:sortDescriptors];

	// Now we Collect the CGWindowIDs from the sorted selection
    int count = [sortedSelection count];
    const void *windowIDs[count];
    int i = 0;

	CFArrayRef windowIDsArray = CFArrayCreate(kCFAllocatorDefault, (const void**)windowIDs, [sortedSelection count], NULL);
	
	// And send our new array on it's merry way
	return windowIDsArray;
}

-(void)createSingleWindowShot:(CGWindowID)windowID
{
	// Create an image from the passed in windowID with the single window option selected by the user.
	StopwatchStart();
	CGImageRef windowImage = CGWindowListCreateImage(imageBounds, singleWindowListOptions, windowID, imageOptions);
	Profile(windowImage);
	StopwatchEnd("Single Window");
	[self setOutputImage:windowImage];
	CGImageRelease(windowImage);
}

-(void)createMultiWindowShot:(NSArray*)selection
{
	// Get the correctly sorted list of window IDs. This is a CFArrayRef because we need to put integers in the array
	// instead of CFTypes or NSObjects.
	CFArrayRef windowIDs = [self newWindowListFromSelection:selection];
	
	// And finally create the window image and set it as our output image.
	StopwatchStart();
	CGImageRef windowImage = CGWindowListCreateImageFromArray(imageBounds, windowIDs, imageOptions);
	Profile(windowImage);
	StopwatchEnd("Multiple Window");
	CFRelease(windowIDs);
	[self setOutputImage:windowImage];
	CGImageRelease(windowImage);
}

-(void)createScreenShot
{
	// This just invokes the API as you would if you wanted to grab a screen shot. The equivalent using the UI would be to
	// enable all windows, turn off "Fit Image Tightly", and then select all windows in the list.
	StopwatchStart();
	CGImageRef screenShot = CGWindowListCreateImage(CGRectInfinite, kCGWindowListOptionOnScreenOnly, kCGNullWindowID, kCGWindowImageDefault);
	Profile(screenShot);
	StopwatchEnd("Screenshot");
	[self setOutputImage:screenShot];
	CGImageRelease(screenShot);
}

#pragma mark GUI Support

-(void)updateImageWithSelection
{
}

enum
{
	// Constants that correspond to the rows in the
	// Single Window Option matrix.
	kSingleWindowAboveOnly = 0,
	kSingleWindowAboveIncluded = 1,
	kSingleWindowOnly = 2,
	kSingleWindowBelowIncluded = 3,
	kSingleWindowBelowOnly = 4,
};

// Simple helper that converts the selected row number of the singleWindow NSMatrix 
// to the appropriate CGWindowListOption.
-(CGWindowListOption)singleWindowOption
{
	CGWindowListOption option = 0;

    return kCGWindowListOptionOnScreenOnly;
}

NSString *kvoContext = @"SonOfGrabContext";
-(void)awakeFromNib
{

}

-(void)dealloc
{

}


-(void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
{


}

#pragma mark Control Actions

-(IBAction)toggleOffscreenWindows:(id)sender
{
	listOptions = ChangeBits(listOptions, kCGWindowListOptionOnScreenOnly, [sender intValue] == NSOffState);
	[self updateWindowList];
	[self updateImageWithSelection];
}

-(IBAction)toggleDesktopWindows:(id)sender
{
	listOptions = ChangeBits(listOptions, kCGWindowListExcludeDesktopElements, [sender intValue] == NSOffState);
	[self updateWindowList];
	[self updateImageWithSelection];
}

-(IBAction)toggleFramingEffects:(id)sender
{
	imageOptions = ChangeBits(imageOptions, kCGWindowImageBoundsIgnoreFraming, [sender intValue] == NSOnState);
	[self updateImageWithSelection];
}

-(IBAction)toggleOpaqueImage:(id)sender
{
	imageOptions = ChangeBits(imageOptions, kCGWindowImageShouldBeOpaque, [sender intValue] == NSOnState);
	[self updateImageWithSelection];
}

-(IBAction)toggleShadowsOnly:(id)sender
{
	imageOptions = ChangeBits(imageOptions, kCGWindowImageOnlyShadows, [sender intValue] == NSOnState);
	[self updateImageWithSelection];
}

-(IBAction)toggleTightFit:(id)sender
{
	imageBounds = ([sender intValue] == NSOnState) ? CGRectNull : CGRectInfinite;
	[self updateImageWithSelection];
}

-(IBAction)updateSingleWindowOption:(id)sender
{
	#pragma unused(sender)
	singleWindowListOptions = [self singleWindowOption];
	[self updateImageWithSelection];
}

-(IBAction)grabScreenShot:(id)sender
{
	#pragma unused(sender)
	[self createScreenShot];
}

-(IBAction)refreshWindowList:(id)sender
{
	#pragma unused(sender)
	// Refreshing the window list combines updating the window list and updating the window image.
	[self updateWindowList];
	[self updateImageWithSelection];
}

@end
