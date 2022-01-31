#include "controlwindow.h"
#include "ui_controlwindow.h"

ControlWindow::ControlWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ControlWindow)
{
    ui->setupUi(this);
}

ControlWindow::~ControlWindow()
{
    delete ui;
}


void ControlWindow::onFrameReady(QPixmap pixmap)
{
    //pixmap.scaled(ui->label->width(), ui->label->width(), Qt::KeepAspectRatio);
}
