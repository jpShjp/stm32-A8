#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "win_qextserialport.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Win_QextSerialPort *myCom;

private slots:
    void readMyCom();
    void on_LED1Btn_clicked();
    void on_LED2Btn_clicked();
    void on_LED3Btn_clicked();
    void on_LED4Btn_clicked();
};

#endif // MAINWINDOW_H
