#include<iostream>
#include<iostream>
#include<string>
using namespace std;
// 纯虚函数语法：`virtual 返回值类型 函数名 （参数列表）= 0 ;
class Base{
public:
// 纯虚函数
    virtual void func() = 0;
};

class Son: public Base{
public:
    virtual void func(){
        cout << "func" << endl;
    };
};

void test01(){
    //抽象类无法实例化对象
    // Base b;
    // new Base;
    Base *base = new Son;
    base->func();
}

int main(){
    test01();

    system("pause");
    return 0;
}
