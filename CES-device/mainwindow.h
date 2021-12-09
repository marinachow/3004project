#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>
#include <QTimer>
#include <clock.h>

#include "record.h"

/* Purpose of Class: It serves as the connection point to the UI
 *
 * Data Members:
   - Clock *clock: A representation of the machines clock
   - bool running: Bool representation for if the machine is running
   - bool onSkin: Bool representation for if the machine is attached to skin
   - int time: The current time on the clock
   - int intensity: The current power level of the machine
   - int dc: Keeps track of the nodes contact to the skin and disconnects after 5 seconds of no contact
   - int elapsed: an int representation of the current time elapsed in the therapy
   - int auto_off: an int representation that Turns off the machine after 30 minutes
   - int waveform: an int representation of which waveform is in use
   - int frequency: an int representation of which frequency is in use
   - QTimer *timer: Timer that runs down the duration of the therapy
   - QTimer *autoTimer: Timer that counts from 30 minutes and it will trigger the machine to turn off
   - QTimer *timer2: Runs the battery down in use and in idle
   - QVector<Record*> recordings: A Vector of recordings
   - QStringList allRecordings: A list of recordings that have been converted to strings
 */

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
    Clock *clock;
    bool running;
    bool onSkin;
    int time;
    int intensity;
    int dc;
    int elapsed;
    int auto_off;
    int waveform;
    int frequency;
    QTimer *timer;
    QTimer *autoTimer;
    QTimer *timer2;
    QVector<Record*> recordings;
    QStringList allRecordings;


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
