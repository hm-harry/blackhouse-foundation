#pragma once
#include"boss.h"

Boss::Boss(int id, string name, int dId){
    m_ID = id;
    m_Name = name;
    m_DeptId = dId;
}

void Boss::showInfo(){
    cout << "id: " << m_ID << "\t" << "name: " << m_Name << "\t" <<  getDeptName() << endl;
}

string Boss::getDeptName(){
    return string("Boss");
}