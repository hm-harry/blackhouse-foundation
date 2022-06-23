#include<iostream>
#include<iostream>
#include<string>
using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// - - 静态成员函数只能访问静态成员变量

class Person{
public:
    static void func(){
        m_A = 100;
        // m_B = 200;
        cout << "static void func()" << endl;
    }
    static int m_A;
    // int m_B;
private:
	static int m_B; //静态成员变量也是有访问权限的
};

int Person::m_A = 0;

void test01(){
    Person p;
    p.func();
    Person::func();
}

int main(){
    test01();

    system("pause");
    return 0;
}
