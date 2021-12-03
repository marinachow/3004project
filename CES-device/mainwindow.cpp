#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->offButton->setEnabled(false);
    ui->changeTimeButton->setEnabled(false);
    ui->moreButton->setEnabled(false);
    ui->lessButton->setEnabled(false);
    ui->lockButton->setEnabled(false);
    ui->skin->insertItem(0,"FALSE");
    ui->skin->insertItem(1,"TRUE");
    ui->adminCurrent->insertItem(0,"0 μA");
    ui->adminCurrent->insertItem(1,"100 μA");
    ui->adminCurrent->insertItem(2,"200 μA");
    ui->adminCurrent->insertItem(3,"300 μA");
    ui->adminCurrent->insertItem(4,"400 μA");
    ui->adminCurrent->insertItem(5,"500 μA");
    ui->adminCurrent->insertItem(6,"700 μA +");
    ui->adminFreq->insertItem(0,"0.5Hz");
    ui->adminFreq->insertItem(1,"77Hz");
    ui->adminFreq->insertItem(2,"100Hz");
    ui->adminTimerTotal->insertItem(0,"20");
    ui->adminTimerTotal->insertItem(1,"40");
    ui->adminTimerTotal->insertItem(2,"60");
    connect(ui->onButton, SIGNAL(released()), this, SLOT (turnOn()));
    connect(ui->offButton, SIGNAL(released()), this, SLOT (turnOff()));
    connect(ui->adminCurrent, SIGNAL(currentIndexChanged(int)), this, SLOT (adminChangeCurrent(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::turnOn() {
    ui->offBlock->hide();
    ui->adminOffBlock->hide();
    ui->offButton->setEnabled(true);
    ui->onButton->setEnabled(false);
    ui->changeTimeButton->setEnabled(true);
    ui->moreButton->setEnabled(true);
    ui->lessButton->setEnabled(true);
    ui->lockButton->setEnabled(true);
}

void MainWindow::turnOff() {
    ui->offBlock->show();
    ui->adminOffBlock->show();
    ui->offButton->setEnabled(false);
    ui->onButton->setEnabled(true);
    ui->changeTimeButton->setEnabled(false);
    ui->moreButton->setEnabled(false);
    ui->lessButton->setEnabled(false);
    ui->lockButton->setEnabled(false);
}

void MainWindow::adminChangeCurrent(int curr) {
     if (curr == 6) {
         ui->offBlock->show();
         ui->adminOffBlock->show();
         ui->offButton->setEnabled(false);
         ui->onButton->setEnabled(false);
         ui->changeTimeButton->setEnabled(false);
         ui->moreButton->setEnabled(false);
         ui->lessButton->setEnabled(false);
         ui->lockButton->setEnabled(false);
         qInfo("Permanently disabled due to current exceeding 700μA");
     }
}
