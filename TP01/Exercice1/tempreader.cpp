#include "tempreader.h"
#include <QFile>
#include <QDebug>
#include <QDirIterator>
#include <QStringList>
#include <QThread>

TempReader::TempReader(QObject *parent)
    : QObject{parent}
{
}


void TempReader::readTemp()
{
    QVector<int> cpuTemps;
    QDirIterator it("/sys/class/thermal/", QStringList() << "thermal_zone*", QDir::Dirs);
    while(it.hasNext()){
        QFile file(it.next() + "/temp");
        file.open(QIODevice::ReadOnly);
        cpuTemps << file.readAll().trimmed().toInt();
    }
    qDebug() << cpuTemps;
    emit tempReady(cpuTemps);
}
