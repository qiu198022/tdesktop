#ifndef ACTIVEWINDOW_H
#define ACTIVEWINDOW_H
#include <QRect>
#include <QVector>
#include <QDebug>

#ifdef Q_OS_WIN
#include <Windows.h>
#include <windef.h>
#elif defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
#include <X11/Xlib.h>
#include <X11/Xutil.h>
void __enum_window(Display*, Window);

#endif

class Rect{
public:
    int top,left,bottom,right;
    Rect(int t,int l,int b,int r): top(t),left(l),bottom(b),right(r){}
#ifdef Q_OS_WIN
    Rect(const RECT &r){ top=r.top,left=r.left,bottom=r.bottom,right=r.right; }
#endif

    Rect(const QRect &r){ top=r.top(),left=r.left(),bottom=r.bottom(),right=r.right(); }
    Rect(const Rect &r){ top=r.top,left=r.left,bottom=r.bottom,right=r.right; }
    Rect(){ top=0,left=0,bottom=0,right=0; }

    int width() {return right-left;}
    int height() {return bottom-top;}

    operator QRect(){return QRect(left,top,width(),height());}
};

class ActiveWindow
{
public:
    ActiveWindow();
    QVector<Rect> enum_window();
};

#endif
