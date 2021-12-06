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
#include <QtWidgets/QTextBrowser>
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
    QLabel *label;
    QLabel *label_2;
    QComboBox *adminCurrent;
    QComboBox *adminFreq;
    QGraphicsView *adminOffBlock;
    QTextEdit *textEdit;
    QTextBrowser *timerTotal;
    QTextBrowser *timeLeft;
    QPushButton *resetButton;
    QComboBox *adminTimerTotal;
    QLabel *label_3;
    QLabel *skinContact;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(647, 478);
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
        graphicsView_3->setGeometry(QRect(90, 70, 191, 211));
        batteryLabel = new QLabel(cesWidget);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));
        batteryLabel->setGeometry(QRect(100, 100, 71, 17));
        batteryLabel->setStyleSheet(QString::fromUtf8(""));
        timerTotalLabel = new QLabel(cesWidget);
        timerTotalLabel->setObjectName(QString::fromUtf8("timerTotalLabel"));
        timerTotalLabel->setGeometry(QRect(100, 130, 71, 17));
        battery = new QProgressBar(cesWidget);
        battery->setObjectName(QString::fromUtf8("battery"));
        battery->setGeometry(QRect(180, 100, 81, 23));
        battery->setValue(100);
        timeLeftLabel = new QLabel(cesWidget);
        timeLeftLabel->setObjectName(QString::fromUtf8("timeLeftLabel"));
        timeLeftLabel->setGeometry(QRect(100, 160, 101, 17));
        intensity = new QProgressBar(cesWidget);
        intensity->setObjectName(QString::fromUtf8("intensity"));
        intensity->setGeometry(QRect(100, 250, 171, 23));
        intensity->setValue(0);
        intensity->setTextVisible(false);
        IntensityLabel = new QLabel(cesWidget);
        IntensityLabel->setObjectName(QString::fromUtf8("IntensityLabel"));
        IntensityLabel->setGeometry(QRect(100, 210, 81, 17));
        changeTimeButton = new QPushButton(cesWidget);
        changeTimeButton->setObjectName(QString::fromUtf8("changeTimeButton"));
        changeTimeButton->setGeometry(QRect(130, 290, 111, 25));
        lessButton = new QPushButton(cesWidget);
        lessButton->setObjectName(QString::fromUtf8("lessButton"));
        lessButton->setGeometry(QRect(90, 320, 80, 25));
        moreButton = new QPushButton(cesWidget);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        moreButton->setGeometry(QRect(190, 320, 91, 25));
        lockButton = new QPushButton(cesWidget);
        lockButton->setObjectName(QString::fromUtf8("lockButton"));
        lockButton->setGeometry(QRect(150, 350, 61, 25));
        label_5 = new QLabel(cesWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 410, 91, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Adlam"));
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_6 = new QLabel(cesWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 20, 54, 17));
        label_6->setFont(font);
        label_7 = new QLabel(cesWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 60, 91, 17));
        label_8 = new QLabel(cesWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 90, 91, 17));
        adminBattery = new QSpinBox(cesWidget);
        adminBattery->setObjectName(QString::fromUtf8("adminBattery"));
        adminBattery->setGeometry(QRect(460, 50, 61, 26));
        adminBattery->setMaximum(100);
        adminBattery->setValue(100);
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
        offBlock->setGeometry(QRect(90, 70, 191, 211));
        label = new QLabel(cesWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 130, 51, 17));
        label_2 = new QLabel(cesWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 160, 61, 17));
        adminCurrent = new QComboBox(cesWidget);
        adminCurrent->setObjectName(QString::fromUtf8("adminCurrent"));
        adminCurrent->setGeometry(QRect(420, 120, 81, 25));
        adminFreq = new QComboBox(cesWidget);
        adminFreq->setObjectName(QString::fromUtf8("adminFreq"));
        adminFreq->setGeometry(QRect(440, 160, 72, 25));
        adminOffBlock = new QGraphicsView(cesWidget);
        adminOffBlock->setObjectName(QString::fromUtf8("adminOffBlock"));
        adminOffBlock->setGeometry(QRect(360, 40, 256, 261));
        adminOffBlock->setFrameShape(QFrame::NoFrame);
        textEdit = new QTextEdit(cesWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 230, 171, 31));
        textEdit->setFrameShape(QFrame::NoFrame);
        timerTotal = new QTextBrowser(cesWidget);
        timerTotal->setObjectName(QString::fromUtf8("timerTotal"));
        timerTotal->setGeometry(QRect(170, 130, 31, 31));
        timerTotal->setFrameShape(QFrame::NoFrame);
        timeLeft = new QTextBrowser(cesWidget);
        timeLeft->setObjectName(QString::fromUtf8("timeLeft"));
        timeLeft->setGeometry(QRect(160, 180, 71, 31));
        timeLeft->setFrameShape(QFrame::NoFrame);
        resetButton = new QPushButton(cesWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(400, 260, 80, 25));
        adminTimerTotal = new QComboBox(cesWidget);
        adminTimerTotal->setObjectName(QString::fromUtf8("adminTimerTotal"));
        adminTimerTotal->setGeometry(QRect(450, 200, 72, 25));
        label_3 = new QLabel(cesWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 200, 61, 17));
        skinContact = new QLabel(cesWidget);
        skinContact->setObjectName(QString::fromUtf8("skinContact"));
        skinContact->setGeometry(QRect(180, 70, 91, 20));
        MainWindow->setCentralWidget(cesWidget);
        graphicsView->raise();
        graphicsView_2->raise();
        graphicsView_3->raise();
        batteryLabel->raise();
        timerTotalLabel->raise();
        battery->raise();
        timeLeftLabel->raise();
        IntensityLabel->raise();
        changeTimeButton->raise();
        lessButton->raise();
        moreButton->raise();
        lockButton->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        adminBattery->raise();
        skin->raise();
        onButton->raise();
        offButton->raise();
        label->raise();
        label_2->raise();
        adminCurrent->raise();
        adminFreq->raise();
        textEdit->raise();
        intensity->raise();
        timerTotal->raise();
        timeLeft->raise();
        resetButton->raise();
        adminTimerTotal->raise();
        label_3->raise();
        adminOffBlock->raise();
        skinContact->raise();
        offBlock->raise();

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
        label->setText(QApplication::translate("MainWindow", "Current ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Frequency", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">        1        2        3        4        5</span></p></body></html>", nullptr));
        timerTotal->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">20</p></body></html>", nullptr));
        timeLeft->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">20:00</p></body></html>", nullptr));
        resetButton->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Timer total", nullptr));
        skinContact->setText(QApplication::translate("MainWindow", "SKIN CONTACT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
