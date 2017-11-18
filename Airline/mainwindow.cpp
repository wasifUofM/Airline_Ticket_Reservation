#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <service!/admin_login.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_admin_pushButton_clicked()
{
    admin_login li;
    li.exec();

}

void MainWindow::on_pushButton_clicked()
{
     exit(1);
}
