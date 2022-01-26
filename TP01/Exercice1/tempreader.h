#ifndef TEMPREADER_H
#define TEMPREADER_H

#include <QObject>
#include <QTimer>

class TempReader : public QObject
{
    Q_OBJECT
public:
    explicit TempReader(QObject *parent = nullptr);

signals:
    void tempReady(QVector<int> temp);

public slots:
    void readTemp();
};

#endif // TEMPREADER_H
