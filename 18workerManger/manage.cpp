#pragma once
#include"manage.h"

Manage::Manage(int id, string name, int dId){
    m_ID = id;
    m_Name = name;
    m_DeptId = dId;
}

void Manage::showInfo(){
    cout << "id: " << m_ID << "\t" << "name: " << m_Name << "\t" <<  getDeptName() << endl;
}

string Manage::getDeptName(){
    return string("Manage");
}