#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_Sign_up_pushButton_2_clicked();

    void on_Sign_pushButton_clicked();

    void on_exit_pushButton_3_clicked();

private:
    Ui::Form *ui;
    void change_mode(bool mode);//mode == true if registraition
};

#endif // FORM_H
