/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *disData;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *led1;
    QLabel *led2;
    QLabel *led3;
    QLabel *led4;
    QLabel *led5;
    QLabel *led6;
    QLabel *led7;
    QLabel *led8;
    QLabel *led9;
    QLabel *led10;
    QLabel *led11;
    QLabel *led12;
    QLabel *led13;
    QLabel *led14;
    QLabel *led15;
    QLabel *led16;
    QGroupBox *groupBox;
    QCheckBox *in1;
    QCheckBox *in2;
    QCheckBox *in3;
    QCheckBox *in4;
    QCheckBox *in5;
    QCheckBox *in6;
    QCheckBox *in8;
    QCheckBox *in7;
    QCheckBox *in13;
    QCheckBox *in9;
    QCheckBox *in10;
    QCheckBox *in12;
    QCheckBox *in16;
    QCheckBox *in15;
    QCheckBox *in11;
    QCheckBox *in14;
    QSpinBox *delayEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *okPB;
    QPushButton *selectPB;
    QPushButton *clearPB;
    QSpinBox *lineEdit;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QPushButton *ProgramePB;
    QPushButton *connectPB;
    QLineEdit *portName;
    QLabel *label_3;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QPushButton *savePB;
    QPushButton *loadPB;
    QGroupBox *groupBox_4;
    QPushButton *simPB;
    QPushButton *stopSimPB;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1211, 580);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        disData = new QTableWidget(centralWidget);
        disData->setObjectName(QStringLiteral("disData"));
        disData->setEnabled(true);
        disData->setGeometry(QRect(10, 70, 791, 491));
        disData->setEditTriggers(QAbstractItemView::NoEditTriggers);
        disData->setSelectionMode(QAbstractItemView::SingleSelection);
        disData->setTextElideMode(Qt::ElideMiddle);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 1181, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        led1 = new QLabel(horizontalLayoutWidget);
        led1->setObjectName(QStringLiteral("led1"));
        led1->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led1);

        led2 = new QLabel(horizontalLayoutWidget);
        led2->setObjectName(QStringLiteral("led2"));
        led2->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led2);

        led3 = new QLabel(horizontalLayoutWidget);
        led3->setObjectName(QStringLiteral("led3"));
        led3->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led3);

        led4 = new QLabel(horizontalLayoutWidget);
        led4->setObjectName(QStringLiteral("led4"));
        led4->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led4);

        led5 = new QLabel(horizontalLayoutWidget);
        led5->setObjectName(QStringLiteral("led5"));
        led5->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led5);

        led6 = new QLabel(horizontalLayoutWidget);
        led6->setObjectName(QStringLiteral("led6"));
        led6->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led6);

        led7 = new QLabel(horizontalLayoutWidget);
        led7->setObjectName(QStringLiteral("led7"));
        led7->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led7);

        led8 = new QLabel(horizontalLayoutWidget);
        led8->setObjectName(QStringLiteral("led8"));
        led8->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led8);

        led9 = new QLabel(horizontalLayoutWidget);
        led9->setObjectName(QStringLiteral("led9"));
        led9->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led9);

        led10 = new QLabel(horizontalLayoutWidget);
        led10->setObjectName(QStringLiteral("led10"));
        led10->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led10);

        led11 = new QLabel(horizontalLayoutWidget);
        led11->setObjectName(QStringLiteral("led11"));
        led11->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led11);

        led12 = new QLabel(horizontalLayoutWidget);
        led12->setObjectName(QStringLiteral("led12"));
        led12->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led12);

        led13 = new QLabel(horizontalLayoutWidget);
        led13->setObjectName(QStringLiteral("led13"));
        led13->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led13);

        led14 = new QLabel(horizontalLayoutWidget);
        led14->setObjectName(QStringLiteral("led14"));
        led14->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led14);

        led15 = new QLabel(horizontalLayoutWidget);
        led15->setObjectName(QStringLiteral("led15"));
        led15->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led15);

        led16 = new QLabel(horizontalLayoutWidget);
        led16->setObjectName(QStringLiteral("led16"));
        led16->setPixmap(QPixmap(QString::fromUtf8(":/led2.png")));

        horizontalLayout->addWidget(led16);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(840, 70, 351, 241));
        in1 = new QCheckBox(groupBox);
        in1->setObjectName(QStringLiteral("in1"));
        in1->setGeometry(QRect(10, 20, 20, 20));
        in1->setIconSize(QSize(50, 50));
        in2 = new QCheckBox(groupBox);
        in2->setObjectName(QStringLiteral("in2"));
        in2->setGeometry(QRect(30, 20, 20, 20));
        in2->setIconSize(QSize(50, 50));
        in3 = new QCheckBox(groupBox);
        in3->setObjectName(QStringLiteral("in3"));
        in3->setGeometry(QRect(50, 20, 20, 20));
        in3->setIconSize(QSize(50, 50));
        in4 = new QCheckBox(groupBox);
        in4->setObjectName(QStringLiteral("in4"));
        in4->setGeometry(QRect(70, 20, 20, 20));
        in4->setIconSize(QSize(50, 50));
        in5 = new QCheckBox(groupBox);
        in5->setObjectName(QStringLiteral("in5"));
        in5->setGeometry(QRect(90, 20, 20, 20));
        in5->setIconSize(QSize(50, 50));
        in6 = new QCheckBox(groupBox);
        in6->setObjectName(QStringLiteral("in6"));
        in6->setGeometry(QRect(110, 20, 20, 20));
        in6->setIconSize(QSize(50, 50));
        in8 = new QCheckBox(groupBox);
        in8->setObjectName(QStringLiteral("in8"));
        in8->setGeometry(QRect(150, 20, 20, 20));
        in8->setIconSize(QSize(50, 50));
        in7 = new QCheckBox(groupBox);
        in7->setObjectName(QStringLiteral("in7"));
        in7->setGeometry(QRect(130, 20, 20, 20));
        in7->setIconSize(QSize(50, 50));
        in13 = new QCheckBox(groupBox);
        in13->setObjectName(QStringLiteral("in13"));
        in13->setGeometry(QRect(270, 20, 20, 20));
        in13->setIconSize(QSize(50, 50));
        in9 = new QCheckBox(groupBox);
        in9->setObjectName(QStringLiteral("in9"));
        in9->setGeometry(QRect(190, 20, 20, 20));
        in9->setIconSize(QSize(50, 50));
        in10 = new QCheckBox(groupBox);
        in10->setObjectName(QStringLiteral("in10"));
        in10->setGeometry(QRect(210, 20, 20, 20));
        in10->setIconSize(QSize(50, 50));
        in12 = new QCheckBox(groupBox);
        in12->setObjectName(QStringLiteral("in12"));
        in12->setGeometry(QRect(250, 20, 20, 20));
        in12->setIconSize(QSize(50, 50));
        in16 = new QCheckBox(groupBox);
        in16->setObjectName(QStringLiteral("in16"));
        in16->setGeometry(QRect(330, 20, 20, 20));
        in16->setIconSize(QSize(50, 50));
        in15 = new QCheckBox(groupBox);
        in15->setObjectName(QStringLiteral("in15"));
        in15->setGeometry(QRect(310, 20, 20, 20));
        in15->setIconSize(QSize(50, 50));
        in11 = new QCheckBox(groupBox);
        in11->setObjectName(QStringLiteral("in11"));
        in11->setGeometry(QRect(230, 20, 20, 20));
        in11->setIconSize(QSize(50, 50));
        in14 = new QCheckBox(groupBox);
        in14->setObjectName(QStringLiteral("in14"));
        in14->setGeometry(QRect(290, 20, 20, 20));
        in14->setIconSize(QSize(50, 50));
        delayEdit = new QSpinBox(groupBox);
        delayEdit->setObjectName(QStringLiteral("delayEdit"));
        delayEdit->setGeometry(QRect(40, 80, 71, 41));
        QFont font;
        font.setPointSize(14);
        delayEdit->setFont(font);
        delayEdit->setAlignment(Qt::AlignCenter);
        delayEdit->setMinimum(1);
        delayEdit->setMaximum(10000);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 51, 16));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 51, 16));
        label_2->setFont(font1);
        okPB = new QPushButton(groupBox);
        okPB->setObjectName(QStringLiteral("okPB"));
        okPB->setGeometry(QRect(260, 190, 81, 41));
        selectPB = new QPushButton(groupBox);
        selectPB->setObjectName(QStringLiteral("selectPB"));
        selectPB->setGeometry(QRect(20, 190, 81, 41));
        clearPB = new QPushButton(groupBox);
        clearPB->setObjectName(QStringLiteral("clearPB"));
        clearPB->setGeometry(QRect(130, 190, 81, 41));
        lineEdit = new QSpinBox(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(240, 80, 71, 41));
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setMinimum(1);
        lineEdit->setMaximum(2001);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 50, 71, 16));
        label_4->setFont(font1);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(1000, 320, 191, 241));
        ProgramePB = new QPushButton(groupBox_2);
        ProgramePB->setObjectName(QStringLiteral("ProgramePB"));
        ProgramePB->setGeometry(QRect(50, 180, 91, 41));
        connectPB = new QPushButton(groupBox_2);
        connectPB->setObjectName(QStringLiteral("connectPB"));
        connectPB->setGeometry(QRect(50, 120, 91, 41));
        portName = new QLineEdit(groupBox_2);
        portName->setObjectName(QStringLiteral("portName"));
        portName->setGeometry(QRect(100, 60, 81, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 20, 91, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 60, 61, 20));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(840, 440, 141, 121));
        savePB = new QPushButton(groupBox_3);
        savePB->setObjectName(QStringLiteral("savePB"));
        savePB->setGeometry(QRect(30, 20, 91, 41));
        loadPB = new QPushButton(groupBox_3);
        loadPB->setObjectName(QStringLiteral("loadPB"));
        loadPB->setGeometry(QRect(30, 70, 91, 41));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(840, 320, 141, 121));
        simPB = new QPushButton(groupBox_4);
        simPB->setObjectName(QStringLiteral("simPB"));
        simPB->setGeometry(QRect(30, 20, 91, 41));
        stopSimPB = new QPushButton(groupBox_4);
        stopSimPB->setObjectName(QStringLiteral("stopSimPB"));
        stopSimPB->setGeometry(QRect(30, 70, 91, 41));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        led1->setText(QString());
        led2->setText(QString());
        led3->setText(QString());
        led4->setText(QString());
        led5->setText(QString());
        led6->setText(QString());
        led7->setText(QString());
        led8->setText(QString());
        led9->setText(QString());
        led10->setText(QString());
        led11->setText(QString());
        led12->setText(QString());
        led13->setText(QString());
        led14->setText(QString());
        led15->setText(QString());
        led16->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Edit Data", 0));
        in1->setText(QString());
        in2->setText(QString());
        in3->setText(QString());
        in4->setText(QString());
        in5->setText(QString());
        in6->setText(QString());
        in8->setText(QString());
        in7->setText(QString());
        in13->setText(QString());
        in9->setText(QString());
        in10->setText(QString());
        in12->setText(QString());
        in16->setText(QString());
        in15->setText(QString());
        in11->setText(QString());
        in14->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Delay :", 0));
        label_2->setText(QApplication::translate("MainWindow", "mSec", 0));
        okPB->setText(QApplication::translate("MainWindow", "OK", 0));
        selectPB->setText(QApplication::translate("MainWindow", "Select All", 0));
        clearPB->setText(QApplication::translate("MainWindow", "Clear all", 0));
        label_4->setText(QApplication::translate("MainWindow", "Line Edit", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Control", 0));
        ProgramePB->setText(QApplication::translate("MainWindow", "Programe", 0));
        connectPB->setText(QApplication::translate("MainWindow", "connect", 0));
        label_3->setText(QApplication::translate("MainWindow", "Status", 0));
        label_5->setText(QApplication::translate("MainWindow", "Port Name", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "File", 0));
        savePB->setText(QApplication::translate("MainWindow", "Save File", 0));
        loadPB->setText(QApplication::translate("MainWindow", "Load File", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Simulation", 0));
        simPB->setText(QApplication::translate("MainWindow", "Play", 0));
        stopSimPB->setText(QApplication::translate("MainWindow", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
