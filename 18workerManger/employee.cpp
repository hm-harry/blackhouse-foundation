#pragma once
#include"employee.h"

Employee::Employee(int id, string name, int dId){
    m_ID = id;
    m_Name = name;
    m_DeptId = dId;
}

void Employee::showInfo(){
    cout << "id: " << m_ID << "\t" << "name: " << m_Name << "\t" <<  getDeptName() << endl;
}

string Employee::getDeptName(){
    return string("Employee");
}