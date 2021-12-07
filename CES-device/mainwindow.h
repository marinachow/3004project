#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>
#include <QTimer>
#include <clock.h>

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

private:
    Ui::MainWindow *ui;
    int time;
    int intensity;
    QTimer *timer;
    QTimer *timer2;
    Clock *clock;
    bool running;
    bool onSkin;
    int dc;
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
    void adminChangeWaveform(int wave);
    void drainBattery();
};
#endif // MAINWINDOW_H
