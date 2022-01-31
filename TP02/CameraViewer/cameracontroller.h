#ifndef CAMERACONTROLLER_H
#define CAMERACONTROLLER_H

#include <QObject>
#include <QPixmap>
#include <QTimer>
#include <opencv2/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

class CameraController : public QObject
{
    Q_OBJECT
public:
    explicit CameraController(QObject *parent = nullptr);

private:
    QTimer *timer;
    bool fullfps = true;
    bool running = false;
    cv::Mat image;
    cv::VideoCapture videoCapture;



signals:
    void frameReady(QPixmap pixmap);

public slots:
    void startCamera();
    void stopCamera();
    void setCameraFullFPS();
    void setCameraLowFPS();
    void runCam();
    void sendImage();

};

#endif // CAMERACONTROLLER_H
