#include "cameracontroller.h"
#include <QThread>
#include <QDebug>

CameraController::CameraController(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this);
    timer->setInterval(1000); //1 seconde
}

void CameraController::startCamera()
{
}

void CameraController::stopCamera()
{
}

void CameraController::setCameraFullFPS()
{
}

void CameraController::setCameraLowFPS()
{
}

void CameraController::runCam(){
}

void CameraController::sendImage(){
    emit frameReady(QPixmap::fromImage(QImage((unsigned char*) image.data, image.cols, image.rows, QImage::Format_RGB888)));
}
