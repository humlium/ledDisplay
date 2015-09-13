#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QThread>
#include <QFile>
#include <QFileDialog>
#include <QDataStream>
#include <QTextStream>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList header;


    timer1 = new QTimer(this);
    timer1->setInterval(1);
    serial = new QSerialPort(this);

    ui->disData->setColumnCount(17);
    ui->disData->setColumnWidth(0, 40);
    ui->disData->setColumnWidth(1, 40);
    ui->disData->setColumnWidth(2, 40);
    ui->disData->setColumnWidth(3, 40);
    ui->disData->setColumnWidth(4, 40);
    ui->disData->setColumnWidth(5, 40);
    ui->disData->setColumnWidth(6, 40);
    ui->disData->setColumnWidth(7, 40);
    ui->disData->setColumnWidth(8, 40);
    ui->disData->setColumnWidth(9, 40);
    ui->disData->setColumnWidth(10, 40);
    ui->disData->setColumnWidth(11, 40);
    ui->disData->setColumnWidth(12, 40);
    ui->disData->setColumnWidth(13, 40);
    ui->disData->setColumnWidth(14, 40);
    ui->disData->setColumnWidth(15, 40);
    ui->disData->setColumnWidth(16, 96);
    ui->disData->setRowCount(2001);
    header << "LED1" << "LED2" << "LED3" << "LED4" << "LED5" << "LED6" << "LED7" << "LED8"
              << "LED9" << "LED10" << "LED11" << "LED12" << "LED13" << "LED14" << "LED15" << "LED16" << "DELAY";
    ui->disData->setHorizontalHeaderLabels(header);
    connect(timer1, SIGNAL(timeout()), this, SLOT(update()));
}


MainWindow::~MainWindow()
{
    if(serial->isOpen())serial->close();
    delete ui;
}

void MainWindow::on_selectPB_clicked()
{
    ui->in1->setChecked(1);
    ui->in2->setChecked(1);
    ui->in3->setChecked(1);
    ui->in4->setChecked(1);
    ui->in5->setChecked(1);
    ui->in6->setChecked(1);
    ui->in7->setChecked(1);
    ui->in8->setChecked(1);
    ui->in9->setChecked(1);
    ui->in10->setChecked(1);
    ui->in11->setChecked(1);
    ui->in12->setChecked(1);
    ui->in13->setChecked(1);
    ui->in14->setChecked(1);
    ui->in15->setChecked(1);
    ui->in16->setChecked(1);
}

void MainWindow::on_clearPB_clicked()
{
    ui->in1->setChecked(0);
    ui->in2->setChecked(0);
    ui->in3->setChecked(0);
    ui->in4->setChecked(0);
    ui->in5->setChecked(0);
    ui->in6->setChecked(0);
    ui->in7->setChecked(0);
    ui->in8->setChecked(0);
    ui->in9->setChecked(0);
    ui->in10->setChecked(0);
    ui->in11->setChecked(0);
    ui->in12->setChecked(0);
    ui->in13->setChecked(0);
    ui->in14->setChecked(0);
    ui->in15->setChecked(0);
    ui->in16->setChecked(0);
}

void MainWindow::on_okPB_clicked()
{
    int line = ui->lineEdit->value()-1;
    if(ui->in1->checkState()==0)ui->disData->setItem(line, 0,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 0,new QTableWidgetItem("1"));
    if(ui->in2->checkState()==0)ui->disData->setItem(line, 1,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 1,new QTableWidgetItem("1"));
    if(ui->in3->checkState()==0)ui->disData->setItem(line, 2,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 2,new QTableWidgetItem("1"));
    if(ui->in4->checkState()==0)ui->disData->setItem(line, 3,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 3,new QTableWidgetItem("1"));
    if(ui->in5->checkState()==0)ui->disData->setItem(line, 4,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 4,new QTableWidgetItem("1"));
    if(ui->in6->checkState()==0)ui->disData->setItem(line, 5,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 5,new QTableWidgetItem("1"));
    if(ui->in7->checkState()==0)ui->disData->setItem(line, 6,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 6,new QTableWidgetItem("1"));
    if(ui->in8->checkState()==0)ui->disData->setItem(line, 7,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 7,new QTableWidgetItem("1"));
    if(ui->in9->checkState()==0)ui->disData->setItem(line, 8,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 8,new QTableWidgetItem("1"));
    if(ui->in10->checkState()==0)ui->disData->setItem(line, 9,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 9,new QTableWidgetItem("1"));
    if(ui->in11->checkState()==0)ui->disData->setItem(line, 10,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 10,new QTableWidgetItem("1"));
    if(ui->in12->checkState()==0)ui->disData->setItem(line, 11,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 11,new QTableWidgetItem("1"));
    if(ui->in13->checkState()==0)ui->disData->setItem(line, 12,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 12,new QTableWidgetItem("1"));
    if(ui->in14->checkState()==0)ui->disData->setItem(line, 13,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 13,new QTableWidgetItem("1"));
    if(ui->in15->checkState()==0)ui->disData->setItem(line, 14,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 14,new QTableWidgetItem("1"));
    if(ui->in16->checkState()==0)ui->disData->setItem(line, 15,new QTableWidgetItem("0"));
    else ui->disData->setItem(line, 15,new QTableWidgetItem("1"));
    ui->disData->setItem(line, 16, new QTableWidgetItem(QString::number(ui->delayEdit->value())));
    //ui->disData->scrollToBottom();
    ui->lineEdit->setValue(line+2);
}

void MainWindow::on_in1_stateChanged(int arg1)
{
    if(arg1!=0) ui->led1->setPixmap(QPixmap(":/led1.png"));
    else ui->led1->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in2_stateChanged(int arg1)
{
    if(arg1!=0) ui->led2->setPixmap(QPixmap(":/led1.png"));
    else ui->led2->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in3_stateChanged(int arg1)
{
    if(arg1!=0) ui->led3->setPixmap(QPixmap(":/led1.png"));
    else ui->led3->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in4_stateChanged(int arg1)
{
    if(arg1!=0) ui->led4->setPixmap(QPixmap(":/led1.png"));
    else ui->led4->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in5_stateChanged(int arg1)
{
    if(arg1!=0) ui->led5->setPixmap(QPixmap(":/led1.png"));
    else ui->led5->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in6_stateChanged(int arg1)
{
    if(arg1!=0) ui->led6->setPixmap(QPixmap(":/led1.png"));
    else ui->led6->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in7_stateChanged(int arg1)
{
    if(arg1!=0) ui->led7->setPixmap(QPixmap(":/led1.png"));
    else ui->led7->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in8_stateChanged(int arg1)
{
    if(arg1!=0) ui->led8->setPixmap(QPixmap(":/led1.png"));
    else ui->led8->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in9_stateChanged(int arg1)
{
    if(arg1!=0) ui->led9->setPixmap(QPixmap(":/led1.png"));
    else ui->led9->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in10_stateChanged(int arg1)
{
    if(arg1!=0) ui->led10->setPixmap(QPixmap(":/led1.png"));
    else ui->led10->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in11_stateChanged(int arg1)
{
    if(arg1!=0) ui->led11->setPixmap(QPixmap(":/led1.png"));
    else ui->led11->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in12_stateChanged(int arg1)
{
    if(arg1!=0) ui->led12->setPixmap(QPixmap(":/led1.png"));
    else ui->led12->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in13_stateChanged(int arg1)
{
    if(arg1!=0) ui->led13->setPixmap(QPixmap(":/led1.png"));
    else ui->led13->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in14_stateChanged(int arg1)
{
    if(arg1!=0) ui->led14->setPixmap(QPixmap(":/led1.png"));
    else ui->led14->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in15_stateChanged(int arg1)
{
    if(arg1!=0) ui->led15->setPixmap(QPixmap(":/led1.png"));
    else ui->led15->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_in16_stateChanged(int arg1)
{
    if(arg1!=0) ui->led16->setPixmap(QPixmap(":/led1.png"));
    else ui->led16->setPixmap(QPixmap(":/led2.png"));
}

void MainWindow::on_simPB_clicked()
{
    ui->groupBox->setEnabled(0);
    timer1->start();
    step = 0;
    delayTime = 20;
    delayTmp = ui->disData->item(step, 16);
    if (!delayTmp || delayTmp->text().isEmpty())
    {
        //step = 0;
    }else
    {

        releaseTime = delayTmp->text().toInt();

    }
}

void MainWindow::update()
{
    delayTime++;

    if(delayTime >= releaseTime)
    {

            delayTmp = ui->disData->item(step, 0);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;

            }else
            {
                if(delayTmp->text() == "0") ui->in1->setChecked(0);
                else ui->in1->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 1);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in2->setChecked(0);
                else ui->in2->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 2);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in3->setChecked(0);
                else ui->in3->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 3);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in4->setChecked(0);
                else ui->in4->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 4);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in5->setChecked(0);
                else ui->in5->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 5);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in6->setChecked(0);
                else ui->in6->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 6);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in7->setChecked(0);
                else ui->in7->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 7);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in8->setChecked(0);
                else ui->in8->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 8);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in9->setChecked(0);
                else ui->in9->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 9);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in10->setChecked(0);
                else ui->in10->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 10);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in11->setChecked(0);
                else ui->in11->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 11);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in12->setChecked(0);
                else ui->in12->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 12);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in13->setChecked(0);
                else ui->in13->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 13);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in14->setChecked(0);
                else ui->in14->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 14);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in15->setChecked(0);
                else ui->in15->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 15);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                //step = 0;
            }else
            {
                if(delayTmp->text() == "0") ui->in16->setChecked(0);
                else ui->in16->setChecked(1);
            }
            delayTmp = ui->disData->item(step, 16);
            if (!delayTmp || delayTmp->text().isEmpty())
            {
                step = 0;
            }else
            {
                ui->label_3->setText("Simulation");
                releaseTime = delayTmp->text().toInt();
                step++;
            }
            delayTime = 0;

            if(step >= 2001) step = 0;

    }
}

void MainWindow::on_stopSimPB_clicked()
{
    timer1->stop();    
    ui->groupBox->setEnabled(1);
}

void MainWindow::on_savePB_clicked()
{
    ui->groupBox->setEnabled(0);
    ui->groupBox_2->setEnabled(0);
    ui->groupBox_3->setEnabled(0);

    QString filePath = QFileDialog::getSaveFileName(this, tr("save file"), "led","csv file(*.csv)");
    QFile f( filePath );
    f.open(QIODevice::WriteOnly);
    //QDataStream fTmp(&f);
    QTextStream fTmp(&f);

    for(int i=0;i<=2001;i++)
    {
        delayTmp = ui->disData->item(i, 0);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
           fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 1);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 2);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 3);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 4);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 5);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 6);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 7);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 8);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 9);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 10);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 11);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 12);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 13);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 14);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 15);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ",";
        }
        delayTmp = ui->disData->item(i, 16);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            fTmp << QString(delayTmp->text()) << ";" << "\0x0A";
        }
    }
    //f.open( QIODevice::WriteOnly );
    //f.write(delayTmp->text());
    f.close();
    ui->groupBox->setEnabled(1);
    ui->groupBox_2->setEnabled(1);
    ui->groupBox_3->setEnabled(1);

}

void MainWindow::on_ProgramePB_clicked()
{
    ui->groupBox->setEnabled(0);
    ui->groupBox_2->setEnabled(0);
    ui->groupBox_3->setEnabled(0);
    int dataHigh=0;
    int dataLow = 0;
    int dataDelayHigh = 0;
    int dataDelayLow = 0;
    QByteArray dataSend;

    for(int i=0;i<=2001;i++)
    {
        dataHigh = 0;
        dataLow  = 0;
        dataDelayHigh = 0;
        dataDelayLow  = 0;
        delayTmp = ui->disData->item(i, 0);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataHigh += 0;
            else dataHigh += 128;
        }
        delayTmp = ui->disData->item(i, 1);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataHigh += 0;
            else dataHigh += 64;
        }
        delayTmp = ui->disData->item(i, 2);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataHigh += 0;
            else dataHigh += 32;
        }
        delayTmp = ui->disData->item(i, 3);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataHigh += 0;
            else dataHigh += 16;
        }
        delayTmp = ui->disData->item(i, 4);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataHigh += 0;
            else dataHigh += 8;
        }
        delayTmp = ui->disData->item(i, 5);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataHigh += 0;
            else dataHigh += 4;
        }
        delayTmp = ui->disData->item(i, 6);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataHigh += 0;
            else dataHigh += 2;
        }
        delayTmp = ui->disData->item(i, 7);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 1;
        }
        delayTmp = ui->disData->item(i, 8);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 128;
        }
        delayTmp = ui->disData->item(i, 9);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 64;
        }
        delayTmp = ui->disData->item(i, 10);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 32;
        }
        delayTmp = ui->disData->item(i, 11);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 16;
        }
        delayTmp = ui->disData->item(i, 12);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 8;
        }
        delayTmp = ui->disData->item(i, 13);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 4;
        }
        delayTmp = ui->disData->item(i, 14);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 2;
        }
        delayTmp = ui->disData->item(i, 15);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            if(delayTmp->text() == "0") dataLow += 0;
            else dataLow += 1;
        }
        delayTmp = ui->disData->item(i, 16);
        if (!delayTmp || delayTmp->text().isEmpty())
        {
            i = 3000;
        }else
        {
            dataDelayHigh = delayTmp->text().toInt()/128;
            dataDelayLow = delayTmp->text().toInt()%128;
        }

        dataSend.clear();
        dataSend.append(":");
        dataSend.append(dataHigh);
        dataSend.append(dataLow);
        dataSend.append(dataDelayHigh);
        dataSend.append(dataDelayLow);
        dataSend.append(";");
        dataSend.append("\x0A");
        if(i<2001){
        if (serial->isOpen()) serial->write(dataSend);
        else ui->label_3->setText("data error");
        }
    }
    ui->groupBox->setEnabled(1);
    ui->groupBox_2->setEnabled(1);
    ui->groupBox_3->setEnabled(1);
}

void MainWindow::on_connectPB_clicked()
{
    if(serial->isOpen())serial->close();
    serial->setPortName(ui->portName->text());
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    if(!serial->open(QIODevice::WriteOnly)) ui->label_3->setText("Port not connect");
    else ui->label_3->setText("Connected");
}

void MainWindow::on_loadPB_clicked()
{
    QStringList tmpL, tmpC;
    ui->groupBox->setEnabled(0);
    ui->groupBox_2->setEnabled(0);
    ui->groupBox_3->setEnabled(0);
    QString filePath = QFileDialog::getOpenFileName(this, tr("save file"), "led","csv file(*.csv)");
    QFile fin( filePath );
    fin.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream  fTmp(&fin);
    QString str = fTmp.readAll();
    QString str1;
    tmpL = str.split(';');
    for(int i=0;i<=tmpL.length()-1;i++){
        str1 = tmpL[i];
        tmpC = str1.split(',');
        for(int j=0;j<=tmpC.length()-1;j++)
        {
            ui->disData->setItem(i, j, new QTableWidgetItem(tmpC[j]));
        }
    }
    fin.close();
    ui->groupBox->setEnabled(1);
    ui->groupBox_2->setEnabled(1);
    ui->groupBox_3->setEnabled(1);
}
