#ifndef ADMIN_LOGIN_H
#define ADMIN_LOGIN_H

#include <QDialog>

#include<DTO!/admin_info.h>
#include<Data service/login_service.h>

namespace Ui {
    class admin_login;
}

class admin_login : public QDialog {
    Q_OBJECT
public:
    admin_login(QWidget *parent = 0);
    ~admin_login();

protected:
    void changeEvent(QEvent *e);

private:
    admin_info d;
    login_service ds;
    Ui::admin_login *ui;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // ADMIN_LOGIN_H
