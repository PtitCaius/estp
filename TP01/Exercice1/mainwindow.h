#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

signals:
    void startTemp();
    void stopTemp();
    void stopApp();

public slots:
    void onTempReady(QVector<int> cpuTemp);

private slots:
    void on_startButton_clicked();
    void on_stopButton_clicked();
    void on_quitButton_clicked();
};
#endif // MAINWINDOW_H
