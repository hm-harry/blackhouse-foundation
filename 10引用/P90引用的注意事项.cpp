#include<iostream>
using namespace std;

int main(){
    int a = 10;
    // 创建引用
    // 引用必须初始化
    // int &b;
    int &b = a;

    int c = 20;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}