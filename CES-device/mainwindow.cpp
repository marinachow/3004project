#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    //initialize decive to off
    ui->offButton->setEnabled(false);
    ui->changeTimeButton->setEnabled(false);
    ui->moreButton->setEnabled(false);
    ui->lessButton->setEnabled(false);
    ui->lockButton->setEnabled(false);

    //initialize variables
    time = 20;
    intensity = 0;

    //populate drop down menus
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

    //slots
    connect(ui->onButton, SIGNAL(released()), this, SLOT (turnOn()));
    connect(ui->offButton, SIGNAL(released()), this, SLOT (turnOff()));
    connect(ui->changeTimeButton, SIGNAL(released()), this, SLOT (changeTime()));
    connect(ui->lessButton, SIGNAL(released()), this, SLOT (lessIntense()));
    connect(ui->moreButton, SIGNAL(released()), this, SLOT (moreIntense()));
    connect(ui->adminBattery, SIGNAL(valueChanged(int)), this, SLOT (adminChangeBattery(int)));
    connect(ui->skin, SIGNAL(currentIndexChanged(int)), this, SLOT (applyToSkin(int)));
    connect(ui->adminCurrent, SIGNAL(currentIndexChanged(int)), this, SLOT (adminChangeCurrent(int)));
    connect(ui->adminFreq, SIGNAL(currentIndexChanged(int)), this, SLOT (adminChangeFreq(int)));
    connect(ui->adminTimerTotal, SIGNAL(currentIndexChanged(int)), this, SLOT (adminChangeTimerTotal(int)));
    connect(ui->resetButton, SIGNAL(released()), this, SLOT (reset()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::turnOn() {
    ui->offBlock->hide();
    ui->adminOffBlock->hide();
    ui->offButton->setEnabled(true);
    ui->onButton->setEnabled(false);
    ui->changeTimeButton->setEnabled(true);
    ui->moreButton->setEnabled(true);
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

void MainWindow::changeTime() {
    if (time == 20) {
        time = 40;
        ui->timerTotal->setPlainText("40");
        ui->timeLeft->setPlainText("40:00");
    } else if (time == 40) {
        time = 60;
        ui->timerTotal->setPlainText("60");
        ui->timeLeft->setPlainText("60:00");
    } else if (time == 60) {
        time = 20;
        ui->timerTotal->setPlainText("20");
        ui->timeLeft->setPlainText("20:00");
    }
}

void MainWindow::lessIntense() {
    intensity -= 1;
    ui->adminCurrent->setCurrentIndex(intensity);
    if (intensity == 0) {
        ui->intensity->setValue(0);
        ui->lessButton->setEnabled(false);
    } else if (intensity == 1) {
        ui->intensity->setValue(20);
    } else if (intensity == 2) {
        ui->intensity->setValue(40);
    } else if (intensity == 3) {
        ui->intensity->setValue(60);
    } else if (intensity == 4) {
        ui->intensity->setValue(80);
        ui->moreButton->setEnabled(true);
    }
}

void MainWindow::moreIntense() {
    intensity += 1;
    ui->adminCurrent->setCurrentIndex(intensity);
    if (intensity == 1) {
        ui->intensity->setValue(20);
        ui->lessButton->setEnabled(true);
    } else if (intensity == 2) {
        ui->intensity->setValue(40);
    } else if (intensity == 3) {
        ui->intensity->setValue(60);
    } else if (intensity == 4) {
        ui->intensity->setValue(80);
    } else if (intensity == 5) {
        ui->intensity->setValue(100);
        ui->moreButton->setEnabled(false);
    }
}

void MainWindow::adminChangeBattery(int batt) {
    ui->battery->setValue(batt);
}

void MainWindow::applyToSkin(int app) {

}

void MainWindow::adminChangeCurrent(int curr) {
    intensity = curr;
    if (curr == 0) {
        ui->intensity->setValue(0);
        ui->lessButton->setEnabled(false);
    }
    if (curr < 5)
        ui->moreButton->setEnabled(true);
    if (curr > 0)
        ui->lessButton->setEnabled(true);
    if (curr == 1)
        ui->intensity->setValue(20);
    else if (curr == 2)
        ui->intensity->setValue(40);
    else if (curr == 3)
        ui->intensity->setValue(60);
    else if (curr == 4)
        ui->intensity->setValue(80);
    else if (curr == 5) {
        ui->intensity->setValue(100);
        ui->moreButton->setEnabled(false);
    } else if (curr == 6) {
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

void MainWindow::adminChangeFreq(int freq) {

}

void MainWindow::adminChangeTimerTotal(int total) {
    if (total == 0) {
        ui->timerTotal->setPlainText("20");
        ui->timeLeft->setPlainText("20:00");
    } else if (total == 1) {
        ui->timerTotal->setPlainText("40");
        ui->timeLeft->setPlainText("40:00");
    } else {
        ui->timerTotal->setPlainText("60");
        ui->timeLeft->setPlainText("60:00");
    }

}

void MainWindow::reset() {

}
