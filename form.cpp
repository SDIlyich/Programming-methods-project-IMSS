#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    this->change_mode(false);
}

void Form::change_mode(bool mode)
{
    ui->email_label_3->setVisible(mode);
    ui->email_lineEdit_3->setVisible(mode);
    ui->exit_pushButton_3->setVisible(mode);
    ui->Sign_up_pushButton_2->setVisible(!mode);
}

Form::~Form()
{
    delete ui;
}

void Form::on_Sign_up_pushButton_2_clicked()
{
    this->change_mode(true);
}


void Form::on_Sign_pushButton_clicked()
{
    this->close();//потом отправка на сервер
}


void Form::on_exit_pushButton_3_clicked()
{
    this->change_mode(false);
}

