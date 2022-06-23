#include<iostream>
using namespace std;
int main(){
    int a = 10;
    // 创建引用
    // 引用必须初始化
    int &b = a;
    // int const *ref = &a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}