#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <string>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    int time;
    int intensity;

private slots:
    void useDevice();
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
    void reset();
};
#endif // MAINWINDOW_H
