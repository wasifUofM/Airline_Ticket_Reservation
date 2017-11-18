/********************************************************************************
** Form generated from reading UI file 'admin_login.ui'
**
** Created: Sat Mar 31 01:42:30 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGIN_H
#define UI_ADMIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin_login
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *admin_login)
    {
        if (admin_login->objectName().isEmpty())
            admin_login->setObjectName(QString::fromUtf8("admin_login"));
        admin_login->resize(400, 300);
        lineEdit = new QLineEdit(admin_login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 60, 113, 20));
        lineEdit_2 = new QLineEdit(admin_login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 90, 113, 20));
        label = new QLabel(admin_login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 61, 16));
        label_2 = new QLabel(admin_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 61, 16));
        pushButton = new QPushButton(admin_login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 150, 75, 23));
        pushButton_2 = new QPushButton(admin_login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 150, 75, 23));

        retranslateUi(admin_login);

        QMetaObject::connectSlotsByName(admin_login);
    } // setupUi

    void retranslateUi(QDialog *admin_login)
    {
        admin_login->setWindowTitle(QApplication::translate("admin_login", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("admin_login", "User Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("admin_login", "Password", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("admin_login", "Login", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("admin_login", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class admin_login: public Ui_admin_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGIN_H
