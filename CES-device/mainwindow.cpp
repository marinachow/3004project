#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    clock = new Clock();
    timer = new QTimer(this);
      timer2 = new QTimer(this);
    running = false;

    //initialize decive to off
    ui->offButton->setEnabled(false);
    ui->changeTimeButton->setEnabled(false);
    ui->moreButton->setEnabled(false);
    ui->lessButton->setEnabled(false);
    ui->lockButton->setEnabled(false);
    ui->skinContactOn->hide();

    //initialize variables
    time = 20;
    intensity = 0;
    onSkin = false;
    dc = 0;

    waveform = 0;
    frequency = 0;

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
    ui->waveForm->insertItem(0,"Alpha");
    ui->waveForm->insertItem(1,"Betta");
    ui->waveForm->insertItem(2,"Gamma");

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
    connect(timer, SIGNAL(timeout()), this, SLOT (doCountDownTick()));
    connect(ui->waveForm, SIGNAL(currentIndexChanged(int)), this, SLOT (adminChangeWaveform(int)));
    connect(timer2, SIGNAL(timeout()), this, SLOT (drainBattery()));
}

MainWindow::~MainWindow() {
    delete ui;
    delete clock;
}

void MainWindow::turnOn() {
    ui->offBlock->hide();
    ui->adminOffBlock->hide();
    ui->offButton->setEnabled(true);
    ui->onButton->setEnabled(false);
    ui->changeTimeButton->setEnabled(true);
    if (intensity < 5)
        ui->moreButton->setEnabled(true);
    if (intensity > 0)
        ui->lessButton->setEnabled(true);
    ui->lockButton->setEnabled(true);

    timer2->start(7000);

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
    if(!running){
        if (time == 20) {
            time = 40;
            ui->timerTotal->setPlainText("40");
            ui->timeLeft->setPlainText("40:00");
            ui->adminTimerTotal->setCurrentIndex(1);
        } else if (time == 40) {
            time = 60;
            ui->timerTotal->setPlainText("60");
            ui->timeLeft->setPlainText("60:00");
            ui->adminTimerTotal->setCurrentIndex(2);
        } else if (time == 60) {
            time = 20;
            ui->timerTotal->setPlainText("20");
            ui->timeLeft->setPlainText("20:00");
            ui->adminTimerTotal->setCurrentIndex(0);
        }
        clock->setTime(time);
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

void MainWindow::doCountDownTick(){

    clock->countdown();
    QTime timeDisplayVal(0, clock->getMinutes(), clock->getSeconds());
    ui->timeLeft->setPlainText(timeDisplayVal.toString("mm:ss"));
    if(!onSkin){
        dc++;
    }
    if(clock->isFinished() || dc >= 5){
        timer->stop();
        clock->setTime(time);
        running = false;
        QTime timeDisplayRset(0, clock->getMinutes(), clock->getSeconds());
        ui->timeLeft->setPlainText(timeDisplayRset.toString("mm:ss"));
        dc = 0;
    }
}

void MainWindow::adminChangeBattery(int batt) {
    ui->battery->setValue(batt);
    if (batt == 5)
        qInfo("Warning low battery: 5%");
    else if (batt == 2) {
        qInfo("Battery dead... Shutting down");
        ui->offBlock->show();
        ui->adminOffBlock->show();
        ui->offButton->setEnabled(false);
        ui->onButton->setEnabled(false);
        ui->changeTimeButton->setEnabled(false);
        ui->moreButton->setEnabled(false);
        ui->lessButton->setEnabled(false);
        ui->lockButton->setEnabled(false);
    }
}

void MainWindow::applyToSkin(int app) {
    if(app && !running){
        dc = 0;
        running = true;
        onSkin = true;
        ui->skinContactOn->show();
        ui->skinContactOff->hide();
        timer->start(1000);
    }
    else if(app && running){
        onSkin = true;
        ui->skinContactOn->show();
        ui->skinContactOff->hide();
        dc = 0;
    }
    else{
        onSkin = false;
        ui->skinContactOn->hide();
        ui->skinContactOff->show();
    }
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
    if(freq == 0){
        //0.55hz
       frequency = 0 ;
    }else if( freq == 1){
        //77hz
       frequency = 1 ;
    }else{
        //100hz
       frequency= 2 ;
    }
}

void MainWindow::adminChangeTimerTotal(int total) {
    if(!running){
        if (total == 0) {
            time = 20;
            ui->timerTotal->setPlainText("20");
            ui->timeLeft->setPlainText("20:00");
        } else if (total == 1) {
            time = 40;
            ui->timerTotal->setPlainText("40");
            ui->timeLeft->setPlainText("40:00");
        } else {
            time = 60;
            ui->timerTotal->setPlainText("60");
            ui->timeLeft->setPlainText("60:00");
        }
        clock->setTime(time);
    }
}


void MainWindow::adminChangeWaveform(int wave) {
    if(wave == 0){
        //Alpha
       wave = 0 ;
    }else if( wave == 1){
        //Beta
       wave= 1 ;
    }else{
        //Gamma
       wave= 2 ;
    }
}

void MainWindow::drainBattery(){
    
    if(intensity==0){
        adminChangeBattery(ui->battery->value()-1);
    }else if (intensity > 0 & onSkin == true){
        adminChangeBattery(ui->battery->value()-3);

    }
}

//Makes a new Record and saves it in a QVector of Records
void MainWindow::makeRecord(){
    QString wf = "";
    QString fq = "";

    if(frequency == 0){
       fq = "0.55Hz" ;
    }else if( frequency == 1){
       fq = "77Hz" ;
    }else if(frequency == 2){
       fq = "100Hz" ;
    }

    if(waveform == 0){
       wf = "Alpha" ;
    }else if( waveform == 1){
       wf = "Beta" ;
    }else if(waveform == 2){
       wf = "Gamma" ;
    }

    Record* newR = new Record(wf, fq, QDateTime::currentDateTime(), intensity, time);
    recordings.push_back(newR);
}

//Clear the old list then fill the QStringList with the contents of recordings
void MainWindow::makeRecordList(){
    allRecordings.clear();
    for (int i = 0; i < recordings.size(); i++) {
       allRecordings += recordings[i]->toString();
    }
}

//Delete everything in the list and vector
void MainWindow::deleteRecords(){
    recordings.clear();
    allRecordings.clear();
}


