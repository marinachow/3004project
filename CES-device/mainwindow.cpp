#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->offButton->setEnabled(false);
    ui->skin->insertItem(0,"FALSE");
    ui->skin->insertItem(1,"TRUE");
    connect(ui->onButton, SIGNAL(released()), this, SLOT (turnOn()));
    connect(ui->offButton, SIGNAL(released()), this, SLOT (turnOff()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::turnOn() {
    ui->offBlock->hide();
    ui->offButton->setEnabled(true);
    ui->onButton->setEnabled(false);
}

void MainWindow::turnOff() {
    ui->offBlock->show();
    ui->offButton->setEnabled(false);
    ui->onButton->setEnabled(true);
}
