#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include <QtSerialPort/QSerialPort>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
        void on_in1_stateChanged(int arg1);

        void on_in2_stateChanged(int arg1);

        void on_selectPB_clicked();

        void on_clearPB_clicked();

        void on_okPB_clicked();

        void on_in3_stateChanged(int arg1);



        void on_in4_stateChanged(int arg1);

        void on_in5_stateChanged(int arg1);

        void on_in6_stateChanged(int arg1);

        void on_in7_stateChanged(int arg1);

        void on_in8_stateChanged(int arg1);

        void on_in9_stateChanged(int arg1);

        void on_in10_stateChanged(int arg1);

        void on_in11_stateChanged(int arg1);

        void on_in12_stateChanged(int arg1);

        void on_in13_stateChanged(int arg1);

        void on_in14_stateChanged(int arg1);

        void on_in15_stateChanged(int arg1);

        void on_in16_stateChanged(int arg1);

        void on_simPB_clicked();

        void update();

        void on_stopSimPB_clicked();

        void on_savePB_clicked();

        void on_ProgramePB_clicked();

        void on_connectPB_clicked();

        void on_loadPB_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer1;
    QTableWidgetItem *delayTmp;
    int delayTime, releaseTime, step;
    QSerialPort *serial;


};

#endif // MAINWINDOW_H
