#include "toolwidget.h"
#include "../helper/imageuploader.h"
#include "../capturewindow.h"
#include "basebutton.h"
#include "pinwidget.h"
#include <QHBoxLayout>
#include <QPainter>
#include "../notifications/NotificationWidget.h"
#include "../notifications/Operation.h"

ToolWidget::ToolWidget(QWidget *parent) :
    BaseTool(parent),captureW((CaptureWindow*)parent)
{
    setAttribute(Qt::WA_TranslucentBackground);
    setFixedSize(550,50);

    initUI();
}

void ToolWidget::initUI()
{
    QHBoxLayout *hboxL=new QHBoxLayout(this);
    hboxL->setMargin(0);
    hboxL->setContentsMargins(qCore->borderPadding()/2,qCore->borderPadding()/2,qCore->borderPadding()/2,qCore->borderPadding()/2);
    hboxL->setSpacing(0);

    btnShape=new BaseButton(qCore->pngImagePath()+QStringLiteral("shape.png"),tr("shape tool"),this);
    btnPen=new BaseButton(qCore->pngImagePath()+QStringLiteral("pen.png"),tr("pen tool"),this);
    btnText=new BaseButton(qCore->pngImagePath()+QStringLiteral("text.png"),tr("text tool"),this);
    btnArrow=new BaseButton(qCore->pngImagePath()+QStringLiteral("arrow.png"),tr("arrow tool"),this);
    btnBlur=new BaseButton(qCore->pngImagePath()+QStringLiteral("blur.png"),tr("blur"),this);
    btnBrush=new BaseButton(qCore->pngImagePath()+QStringLiteral("brush.png"),tr("Brush tool"),this);
    btnErase=new BaseButton(qCore->pngImagePath()+QStringLiteral("erase.png"),tr("erase tool"),this);
    btnUndo=new BaseButton(qCore->pngImagePath()+QStringLiteral("undo.png"),tr("undo"),this,false);
    btnRedo=new BaseButton(qCore->pngImagePath()+QStringLiteral("redo.png"),tr("redo"),this,false);
    btnCancel=new BaseButton(qCore->pngImagePath()+QStringLiteral("cancel.png"),tr("close"),this,false);
    btnPin=new BaseButton(qCore->pngImagePath()+QStringLiteral("pin.png"),tr("pin tool"),this,false);
    btnSave=new BaseButton(qCore->pngImagePath()+QStringLiteral("save.png"),tr("save to file"),this,false);
    btnCopy=new BaseButton(qCore->pngImagePath()+QStringLiteral("copy.png"),tr("copy to clipboard"),this,false);

    hboxL->addWidget(btnShape);
    hboxL->addWidget(btnPen);
    hboxL->addWidget(btnText);
    hboxL->addWidget(btnArrow);
    hboxL->addWidget(btnBlur);
    hboxL->addWidget(btnBrush);
    hboxL->addWidget(btnErase);
    hboxL->addWidget(btnUndo);
    hboxL->addWidget(btnRedo);
    hboxL->addWidget(btnPin);
    hboxL->addWidget(btnCancel);
    hboxL->addWidget(btnSave);
    hboxL->addWidget(btnCopy);
    setLayout(hboxL);

    connect(btnShape,SIGNAL(clicked(bool)),this,SLOT(on_btnShape_clicked()));
    connect(btnPen,SIGNAL(clicked(bool)),this,SLOT(on_btnPen_clicked()));
    connect(btnText,SIGNAL(clicked(bool)),this,SLOT(on_btnText_clicked()));
    connect(btnArrow,SIGNAL(clicked(bool)),this,SLOT(on_btnArrow_clicked()));
    connect(btnErase,SIGNAL(clicked(bool)),this,SLOT(on_btnErase_clicked()));
    connect(btnUndo,SIGNAL(clicked(bool)),this,SLOT(on_btnUndo_clicked()));
    connect(btnRedo,SIGNAL(clicked(bool)),this,SLOT(on_btnRedo_clicked()));
    connect(btnCancel,SIGNAL(clicked(bool)),this,SLOT(on_btnCancel_clicked()));
    connect(btnSave,SIGNAL(clicked(bool)),this,SLOT(on_btnSave2File_clicked()));
    connect(btnCopy,SIGNAL(clicked(bool)),this,SLOT(on_btnCopyClipboard_clicked()));
    connect(btnBlur,SIGNAL(clicked(bool)),this,SLOT(on_btnBlur_clicked()));
    connect(btnBrush,SIGNAL(clicked(bool)),this,SLOT(on_btnBrush_clicked()));
    connect(btnPin,SIGNAL(clicked(bool)),this,SLOT(on_btnPin_clicked()));
}

ToolWidget::~ToolWidget() {}

void ToolWidget::singlePressed()
{
    btnShape->setChecked(false);
    btnPen->setChecked(false);
    btnErase->setChecked(false);
    btnText->setChecked(false);
    btnArrow->setChecked(false);
    btnBlur->setChecked(false);
    btnBrush->setChecked(false);
    switch (captureW->paintEventNotify) {
    case PaintEventNotify::Shape: btnShape->setChecked(true); break;
    case PaintEventNotify::Pen: btnPen->setChecked(true); break;
    case PaintEventNotify::Erase: btnErase->setChecked(true); break;
    case PaintEventNotify::Text: btnText->setChecked(true); break;
    case PaintEventNotify::Arrow: btnArrow->setChecked(true); break;
    case PaintEventNotify::Blur: btnBlur->setChecked(true);break;
    case PaintEventNotify::Brush: btnBrush->setChecked(true);break;
    default:break;
    }
}

void ToolWidget::triggerInputTextEdit()
{
    captureW->inputTextEdit->move(0,0);
    captureW->inputTextEdit->hide();
    captureW->update();
}

void ToolWidget::on_btnBrush_clicked()
{
    captureW->paintEventNotify=PaintEventNotify::Brush;
    captureW->painting=true;
    captureW->resizing=false;

    triggerInputTextEdit();
    captureW->shapeType=ShapeType::Brush;
    qCore->setSingleShape(captureW->shapeType);

    captureW->eraseTool->hide();
    captureW->penTool->hide();
    captureW->textTool->hide();
    captureW->arrowTool->hide();
    captureW->shapeTool->hide();

    captureW->shapeTool->singlePressed();
    captureW->arrowTool->singlePressed();
    captureW->penTool->singlePressed();
    captureW->eraseTool->singlePressed();
    singlePressed();
}

void ToolWidget::on_btnSave2File_clicked()
{
    captureW->setCursor(Qt::ArrowCursor);

    if(captureW->paintEventNotify==PaintEventNotify::Text){
        captureW->inputTextEdit->hide();
    }
    captureW->grabSubRegion();
    QString filename=qCore->PixMap2ImageFile(qCore->getPixMap());
    NotificationParams params;
    params.title = "保存截图到桌面!";
    params.detailsButtonText = "返回";
    params.message = Operation::DoSomething(Result::RESULT_SUCCESS);
    params.callback = [this](){
        on_btnCancel_clicked();
    };
    notificationLayout.AddNotificationWidget(this, params);
    //qCore->getSysTray()->showMessage(tr("QtScreenShot notification"),tr("The image has been saved to a file"));

    if(qCore->getEnableUpload()){
        UploaderThread *th=new UploaderThread(filename);
        th->start();
        th->wait(10);
    }
}

void ToolWidget::on_btnCopyClipboard_clicked()
{
    captureW->setCursor(Qt::ArrowCursor);

    if(captureW->paintEventNotify==PaintEventNotify::Text){
        captureW->inputTextEdit->hide();
    }
    captureW->grabSubRegion();
    qCore->PixMap2ClipBoard(qCore->getPixMap());
    qCore->getSysTray()->showMessage(tr("QtScreenShot notification"),tr("The image has been saved to the clipboard"));
    on_btnCancel_clicked();
}

void ToolWidget::on_btnPin_clicked()
{
    auto r=captureW->grabSubRegion();
    pinWidget=new PinWidget(qCore->getPixMap());
    pinWidget->setGeometry(r);
    pinWidget->setAttribute(Qt::WA_DeleteOnClose);
    pinWidget->show();
    on_btnCancel_clicked();
}

void ToolWidget::on_btnCancel_clicked()
{
    kCapture_window_load=false;
    captureW->setCursor(Qt::ArrowCursor);
    captureW->close();
    close();
}

void ToolWidget::on_btnBlur_clicked()
{
    captureW->paintEventNotify=PaintEventNotify::Blur;
    captureW->painting=true;
    captureW->resizing=false;

    triggerInputTextEdit();
    captureW->shapeType=ShapeType::Blur;
    qCore->setSingleShape(captureW->shapeType);

    captureW->eraseTool->hide();
    captureW->penTool->hide();
    captureW->textTool->hide();
    captureW->arrowTool->hide();
    captureW->shapeTool->hide();

    captureW->shapeTool->singlePressed();
    captureW->arrowTool->singlePressed();
    captureW->penTool->singlePressed();
    captureW->eraseTool->singlePressed();
    singlePressed();
}

void ToolWidget::on_btnShape_clicked()
{
    captureW->paintEventNotify=PaintEventNotify::Shape;
    captureW->painting=true;
    captureW->resizing=false;

    captureW->eraseTool->hide();
    captureW->penTool->hide();
    captureW->textTool->hide();
    captureW->arrowTool->hide();
    captureW->moveWidgetTool(captureW->shapeTool);
    captureW->shapeTool->show();
    triggerInputTextEdit();
    captureW->shapeTool->singlePressed();
    captureW->arrowTool->singlePressed();
    captureW->penTool->singlePressed();
    captureW->eraseTool->singlePressed();
    singlePressed();
}

void ToolWidget::on_btnPen_clicked()
{
    captureW->paintEventNotify=PaintEventNotify::Pen;
    captureW->painting=true;
    captureW->resizing=false;

    captureW->eraseTool->hide();
    captureW->shapeTool->hide();
    captureW->textTool->hide();
    captureW->arrowTool->hide();
    captureW->moveWidgetTool(captureW->penTool);
    captureW->penTool->show();
    triggerInputTextEdit();

    captureW->shapeTool->singlePressed();
    captureW->arrowTool->singlePressed();
    captureW->penTool->singlePressed();
    captureW->eraseTool->singlePressed();
    singlePressed();
}

void ToolWidget::on_btnText_clicked()
{
    captureW->paintEventNotify=PaintEventNotify::Text;
    captureW->shapeType=ShapeType::Text;
    qCore->setSingleShape(captureW->shapeType);
    captureW->painting=true;
    captureW->resizing=false;

    captureW->eraseTool->hide();
    captureW->shapeTool->hide();
    captureW->penTool->hide();
    captureW->arrowTool->hide();
    captureW->moveWidgetTool(captureW->textTool);
    captureW->textTool->show();
    triggerInputTextEdit();

    captureW->shapeTool->singlePressed();
    captureW->arrowTool->singlePressed();
    captureW->penTool->singlePressed();
    captureW->eraseTool->singlePressed();
    singlePressed();
}

void ToolWidget::on_btnArrow_clicked()
{
    captureW->paintEventNotify=PaintEventNotify::Arrow;
    captureW->painting=true;
    captureW->resizing=false;

    captureW->eraseTool->hide();
    captureW->shapeTool->hide();
    captureW->textTool->hide();
    captureW->penTool->hide();
    captureW->arrowTool->show();
    triggerInputTextEdit();

    captureW->moveWidgetTool(captureW->arrowTool);
    captureW->shapeTool->singlePressed();
    captureW->arrowTool->singlePressed();
    captureW->penTool->singlePressed();
    captureW->eraseTool->singlePressed();
    singlePressed();
}

void ToolWidget::on_btnErase_clicked()
{
    captureW->paintEventNotify=PaintEventNotify::Erase;

    triggerInputTextEdit();
    captureW->shapeType=ShapeType::Unknown;
    captureW->painting=true;
    captureW->resizing=false;

    captureW->eraseTool->show();
    captureW->textTool->hide();
    captureW->shapeTool->hide();
    captureW->penTool->hide();
    captureW->arrowTool->hide();

    captureW->moveWidgetTool(captureW->eraseTool);
    captureW->shapeTool->singlePressed();
    captureW->arrowTool->singlePressed();
    captureW->penTool->singlePressed();
    captureW->eraseTool->singlePressed();
    singlePressed();
}

void ToolWidget::on_btnUndo_clicked()
{
    triggerInputTextEdit();

    captureW->textTool->hide();
    captureW->resetPaintInfo();

    if(!captureW->sos.empty()){
        restore.push(captureW->sos.back());
        captureW->sos.pop_back();
        captureW->update();
    }
}

void ToolWidget::on_btnRedo_clicked()
{
    triggerInputTextEdit();
    captureW->textTool->hide();

    if(!restore.empty()){
        captureW->sos.push_back(restore.top());
        restore.pop();
        captureW->update();
    }
}
