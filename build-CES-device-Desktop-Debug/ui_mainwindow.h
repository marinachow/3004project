/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *cesWidget;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QLabel *batteryLabel;
    QLabel *timerTotalLabel;
    QProgressBar *battery;
    QLabel *timeLeftLabel;
    QProgressBar *intensity;
    QLabel *IntensityLabel;
    QPushButton *changeTimeButton;
    QTextEdit *timeLeft;
    QTextEdit *timerTotal;
    QPushButton *lessButton;
    QPushButton *moreButton;
    QPushButton *lockButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *adminBattery;
    QComboBox *skin;
    QPushButton *onButton;
    QPushButton *offButton;
    QGraphicsView *offBlock;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        cesWidget = new QWidget(MainWindow);
        cesWidget->setObjectName(QString::fromUtf8("cesWidget"));
        graphicsView = new QGraphicsView(cesWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 20, 301, 431));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgba(181, 185, 190);"));
        graphicsView_2 = new QGraphicsView(cesWidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(70, 60, 231, 331));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));
        graphicsView_3 = new QGraphicsView(cesWidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(90, 70, 191, 191));
        batteryLabel = new QLabel(cesWidget);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));
        batteryLabel->setGeometry(QRect(100, 80, 71, 17));
        batteryLabel->setStyleSheet(QString::fromUtf8(""));
        timerTotalLabel = new QLabel(cesWidget);
        timerTotalLabel->setObjectName(QString::fromUtf8("timerTotalLabel"));
        timerTotalLabel->setGeometry(QRect(100, 110, 71, 17));
        battery = new QProgressBar(cesWidget);
        battery->setObjectName(QString::fromUtf8("battery"));
        battery->setGeometry(QRect(180, 80, 81, 23));
        battery->setValue(100);
        timeLeftLabel = new QLabel(cesWidget);
        timeLeftLabel->setObjectName(QString::fromUtf8("timeLeftLabel"));
        timeLeftLabel->setGeometry(QRect(100, 140, 101, 17));
        intensity = new QProgressBar(cesWidget);
        intensity->setObjectName(QString::fromUtf8("intensity"));
        intensity->setGeometry(QRect(120, 220, 118, 23));
        intensity->setValue(24);
        IntensityLabel = new QLabel(cesWidget);
        IntensityLabel->setObjectName(QString::fromUtf8("IntensityLabel"));
        IntensityLabel->setGeometry(QRect(100, 200, 81, 17));
        changeTimeButton = new QPushButton(cesWidget);
        changeTimeButton->setObjectName(QString::fromUtf8("changeTimeButton"));
        changeTimeButton->setGeometry(QRect(130, 280, 111, 25));
        timeLeft = new QTextEdit(cesWidget);
        timeLeft->setObjectName(QString::fromUtf8("timeLeft"));
        timeLeft->setGeometry(QRect(150, 160, 61, 31));
        timerTotal = new QTextEdit(cesWidget);
        timerTotal->setObjectName(QString::fromUtf8("timerTotal"));
        timerTotal->setGeometry(QRect(170, 110, 41, 31));
        lessButton = new QPushButton(cesWidget);
        lessButton->setObjectName(QString::fromUtf8("lessButton"));
        lessButton->setGeometry(QRect(100, 310, 80, 25));
        moreButton = new QPushButton(cesWidget);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        moreButton->setGeometry(QRect(190, 310, 81, 25));
        lockButton = new QPushButton(cesWidget);
        lockButton->setObjectName(QString::fromUtf8("lockButton"));
        lockButton->setGeometry(QRect(150, 340, 61, 25));
        label_5 = new QLabel(cesWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 410, 81, 17));
        label_6 = new QLabel(cesWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 20, 54, 17));
        label_7 = new QLabel(cesWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 60, 91, 17));
        label_8 = new QLabel(cesWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 90, 91, 17));
        adminBattery = new QSpinBox(cesWidget);
        adminBattery->setObjectName(QString::fromUtf8("adminBattery"));
        adminBattery->setGeometry(QRect(460, 50, 45, 26));
        skin = new QComboBox(cesWidget);
        skin->setObjectName(QString::fromUtf8("skin"));
        skin->setGeometry(QRect(460, 90, 72, 25));
        onButton = new QPushButton(cesWidget);
        onButton->setObjectName(QString::fromUtf8("onButton"));
        onButton->setGeometry(QRect(70, 30, 41, 25));
        offButton = new QPushButton(cesWidget);
        offButton->setObjectName(QString::fromUtf8("offButton"));
        offButton->setGeometry(QRect(120, 30, 51, 25));
        offBlock = new QGraphicsView(cesWidget);
        offBlock->setObjectName(QString::fromUtf8("offBlock"));
        offBlock->setGeometry(QRect(90, 70, 191, 192));
        MainWindow->setCentralWidget(cesWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        batteryLabel->setText(QApplication::translate("MainWindow", "Battery level:", nullptr));
        timerTotalLabel->setText(QApplication::translate("MainWindow", "Timer total:", nullptr));
        timeLeftLabel->setText(QApplication::translate("MainWindow", "Remaining time:", nullptr));
        IntensityLabel->setText(QApplication::translate("MainWindow", "Intensity:", nullptr));
        changeTimeButton->setText(QApplication::translate("MainWindow", "Change total time", nullptr));
        timeLeft->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">20:00</p></body></html>", nullptr));
        timerTotal->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">20</p></body></html>", nullptr));
        lessButton->setText(QApplication::translate("MainWindow", "Less intensity", nullptr));
        moreButton->setText(QApplication::translate("MainWindow", "More intensity", nullptr));
        lockButton->setText(QApplication::translate("MainWindow", "Lock", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "ALPHA-STIM", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Battery Level", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Apply to Skin", nullptr));
        adminBattery->setSuffix(QApplication::translate("MainWindow", "%", nullptr));
        onButton->setText(QApplication::translate("MainWindow", "ON", nullptr));
        offButton->setText(QApplication::translate("MainWindow", "OFF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
