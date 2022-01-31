#include "controlwindow.h"
#include "cameracontroller.h"
#include <QApplication>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Création de la fenêtre principale
    ControlWindow w;

    //Création du controller de caméra et de son thread associé
    CameraController controller;
    QThread t;
    controller.moveToThread(&t);

    //Connection des signaux/slots

    //start thread controller
    t.start();
    //visualisation de la fenêtre principale
    w.show();

    return a.exec();
}
