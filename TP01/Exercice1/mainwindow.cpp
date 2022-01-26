#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stopButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onTempReady(QVector<int> cpuTemps)
{
    //VOTRE CODE ICI
    // On a en entrée un tableau d'entier représentant la température de chaque coeur, au format 5 digits
    // Dans le 5 digit, les deux premiers chiffres représentent le nombre de degrés et les trois autre des centièmes de degrés.
    QString labelText="";

    //pour lire chaque température ->
    for(auto temp : cpuTemps){
        labelText+= "";
    }

    ui->label->setText(labelText);
}


void MainWindow::on_startButton_clicked()
{
    ui->stopButton->setEnabled(true);
    ui->startButton->setEnabled(false);
    emit startTemp();
}


void MainWindow::on_stopButton_clicked()
{
    ui->stopButton->setEnabled(false);
    ui->startButton->setEnabled(true);
    emit stopTemp();
}


void MainWindow::on_quitButton_clicked()
{
    emit stopApp();
}

