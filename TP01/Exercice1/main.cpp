#include "mainwindow.h"
#include "tempreader.h"

#include <QApplication>
#include <QThread>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QThread readerThread;
    MainWindow w;
    TempReader reader;
    //Deux slots -> start et stop a connecter
    //1 signal -> timeout à connecter.
    QTimer timer;

    timer.setInterval(2000);


    //Code De connection ici
    // ex ->
    a.connect(&w, &MainWindow::stopApp, &a, &QApplication::quit);

    //on met le reader (qui fait du traitement non lié à l'interface, dans son propres thread, pour éviter de bloquer le thread lié à l'UI
    reader.moveToThread(&readerThread);
    readerThread.start();

    w.show();
    return a.exec();
}
