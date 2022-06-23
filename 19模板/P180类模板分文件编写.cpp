#include<iostream>
#include<string>
//解决方式1，包含cpp源文件
// #include"Person.cpp"
//解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
#include "person.hpp"
using namespace std;

// template<class T1, class T2>
// class Person {
// public:
// 	Person(T1 name, T2 age);
// 	void showPerson();
// public:
// 	T1 m_Name;
// 	T2 m_Age;
// };

// //构造函数 类外实现
// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age) {
// 	this->m_Name = name;
// 	this->m_Age = age;
// }

// //成员函数 类外实现
// template<class T1, class T2>
// void Person<T1, T2>::showPerson() {
// 	cout << "name: " << this->m_Name << " age:" << this->m_Age << endl;
// }

void test01()
{
	Person<string, int> p("Tom", 10);
	p.showPerson();
}

int main(){
    test01();

    system("pause");
    return 0;
}
