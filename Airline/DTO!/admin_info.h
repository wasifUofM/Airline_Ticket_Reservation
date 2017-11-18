#ifndef ADMIN_INFO_H
#define ADMIN_INFO_H
#include<QString>
class admin_info
{
    QString name,pass;
public:
    admin_info();
    void setName(QString name);
    void setPass(QString pass);
    QString getName();
    QString getPass();


};


#endif // ADMIN_INFO_H
