#include<iostream>
#include<string>
using namespace std;
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student{
public:
    string m_Name;
    int m_ID;

    void showStudent(){
        cout << "name:" << m_Name << " " << "ID" << m_ID << endl;
    }

    void setName(string name){
        m_Name = name;
    }

    void setID(int ID){
        m_ID = ID;
    }
};

int main(){
    Student s1;
    s1.setName("zhangsan");
    s1.m_ID = 1;
    s1.showStudent();

    Student s2;
    s2.m_Name = "lisi";
    s2.m_ID = 2;
    s2.showStudent();

    system("pause");
    return 0;
}