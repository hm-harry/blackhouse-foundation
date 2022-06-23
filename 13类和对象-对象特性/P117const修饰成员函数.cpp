#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// 常函数
class Person{
public:
//this指针的本质是一个指针常量，指针的指向不可修改
    Person(){}
    void showPerson() const{
        m_B = 100;
        // m_A = 100;
    }
    void func(){}
    int m_A;
    mutable int m_B;//可修改 可变的
};

void test01(){
    const Person p;
    p.m_B = 100; 
    p.showPerson();
    // p.func(); //常对象不能调用const的函数
}

int main(){
    test01();    

    system("pause");
    return 0;
}
