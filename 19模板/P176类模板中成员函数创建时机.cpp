#include<iostream>
#include<string>
using namespace std;
// 普通类中的成员函数一开始就可以创建
// 类模板中的成员函数在调用时才创建
class Person1{
public:
    void showPeron1(){
        cout << "Person1 show" << endl;
    }
};

class Person2{
public:
    void showPeron2(){
        cout << "Person2 show" << endl;
    }
};

template<class T>
class MyClass{
public:
    T obj;

    void func1(){obj.showPeron1();};
    void func2(){obj.showPeron2();};
};

void test01()
{
    MyClass<Person1> m;
    m.func1();
    //m.func2();//编译会出错，说明函数调用才会去创建成员函数
}

int main(){
    test01();

    system("pause");
    return 0;
}
