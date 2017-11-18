#include "admin_login.h"
#include "ui_admin_login.h"
#include<QMessageBox>
#include<mainwindow.h>

admin_login::admin_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_login)
{
    ui->setupUi(this);
}

admin_login::~admin_login()
{
    delete ui;
}

void admin_login::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void admin_login::on_pushButton_2_clicked()
{
    MainWindow mn;
    mn.show();
    this->hide();

}

void admin_login::on_pushButton_clicked()
{
    QMessageBox qm;

    QString name,pass;
    name=ui->lineEdit->text();
    pass=ui->lineEdit_2->text();
    this->d=ds.readData();
    if((d.getName()==name)&&(d.getPass()==pass)){
        qm.setText("Login Successful");
        qm.exec();
    }
    else {
        qm.setText("Login Failed");
        qm.exec();
}
}
