#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui_form = new Form;
    ui_form->show();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_5_clicked()
{
    this->close();
}


void MainWindow::on_action_5_triggered()
{
    this->on_pushButton_5_clicked();
}


void MainWindow::on_Task1_pushButton_clicked()
{
    qDebug()<<"task1";
}


void MainWindow::on_action_1_triggered()
{
    this->on_Task1_pushButton_clicked();
}


void MainWindow::on_Task2_pushButton_2_clicked()
{
    qDebug()<<"task2";
}


void MainWindow::on_action_2_triggered()
{
     this->on_Task2_pushButton_2_clicked();
}


void MainWindow::on_Task3_pushButton_3_clicked()
{
    qDebug()<<"task3";
}


void MainWindow::on_action_3_triggered()
{
    this->on_Task3_pushButton_3_clicked();
}


void MainWindow::on_Task4_pushButton_4_clicked()
{
     qDebug()<<"task4";
}


void MainWindow::on_action_4_triggered()
{
    this->on_Task4_pushButton_4_clicked();
}

