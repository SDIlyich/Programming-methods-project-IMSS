#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "form.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_5_clicked();

    void on_action_5_triggered();

    void on_Task1_pushButton_clicked();

    void on_action_1_triggered();

    void on_Task2_pushButton_2_clicked();

    void on_action_2_triggered();

    void on_Task3_pushButton_3_clicked();

    void on_action_3_triggered();

    void on_Task4_pushButton_4_clicked();

    void on_action_4_triggered();

private:
    Ui::MainWindow *ui;
    Form *ui_form;
};
#endif // MAINWINDOW_H
