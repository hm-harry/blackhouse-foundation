#include<iostream>
using namespace std;
// 不要返回局部引用变量
int& test01()
{
    int a = 10;
    return a;
}
// 函数调用可以在左值
int& test02()
{
    static int a = 10;//静态变量存储在全局区
    return a;
}

int main(){
    // 不要返回局部引用变量
    // int &ref = test01();
    // cout << "ref = " << ref << endl;

    int &ref = test02();
    cout << "ref = " << ref << endl;

    test02() = 100;
    cout << "ref = " << ref << endl;
    
    system("pause");
    return 0;
}