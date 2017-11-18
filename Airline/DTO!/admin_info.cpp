#include "admin_info.h"

admin_info::admin_info()
{
}

QString admin_info::getName(){
    return this->name;
}

QString admin_info::getPass(){
    return this->pass;
}

void admin_info::setName(QString name){
    this->name=name;
}

void admin_info::setPass(QString pass){
    this->pass=pass;
}

