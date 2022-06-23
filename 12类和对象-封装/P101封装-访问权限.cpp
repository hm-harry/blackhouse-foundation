#include<iostream>
using namespace std;
//访问权限
// 1. public        公共权限  类内可以访问  类外可以访问
// 2. protected 保护权限      类内可以访问  类外不可以访问 儿子可以访问父亲保护内容
// 3. private      私有权限   类内可以访问  类外不可以访问 儿子可以访问父亲保护内容

class Person{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func(){
        m_Name = "zhangsan";
        m_Car = "audi";
        m_Password = 123456;
    }
};

int main(){
    Person p1;
    p1.m_Name = "lisi";
    // p1.m_Car = "benz";//保护权限类外访问不到
    p1.func();

    system("pause");
    return 0;
}