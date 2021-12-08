#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>
#include <QTimer>
#include <clock.h>

#include "record.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void doCountDownTick();
    void notInUse();

private:
    Ui::MainWindow *ui;
    int time;
    int intensity;
    QTimer *timer;
    QTimer *autoTimer;
    QTimer *timer2;
    QVector<Record*> recordings;
    QStringList allRecordings;
    Clock *clock;
    bool running;
    bool onSkin;
    int dc;
    int elapsed;
    int auto_off;
    int waveform;
    int frequency;

private slots:
    void turnOn();
    void turnOff();
    void changeTime();
    void lessIntense();
    void moreIntense();
    void adminChangeBattery(int batt);
    void applyToSkin(int app);
    void adminChangeCurrent(int curr);
    void adminChangeFreq(int freq);
    void adminChangeTimerTotal(int total);
    void resetClock();
    void adminChangeWaveform(int wave);
    void drainBattery();
    void makeRecord();
    void makeRecordList();
    void deleteRecords();
    void goBack();
};
#endif // MAINWINDOW_H
