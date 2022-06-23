#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// 成员变量和成员函数分开存储
class Person{
public:
//非静态成员变量占对象空间
    int m_A;
//静态成员变量不占对象空间
    static int m_B;
//函数也不占对象空间，所有函数共享一个函数实例
    void func() {}
//静态成员函数也不占对象空间
    static void sfunc() {}
};

void test01(){
    Person p;
// 每一个空对象也应该有一个独一无二的内存地址
    cout << "size of p = " << sizeof(p) << endl;
}

void test02(){
    Person p;
    cout << "size of p = " << sizeof(p) << endl;
}

int main(){
    test02();

    system("pause");
    return 0;
}
