#include<iostream>
#include<string>
using namespace std;
// 普通函数与函数模板区别：
// 普通函数调用时可以发生自动类型转换（隐式类型转换）
// 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
// 如果利用显示指定类型的方式，可以发生隐式类型转换

int myAdd01(int a, int b){
    return a+b;
}

template<class T>
T myAdd02(T a, T b){
    return a+b;
}

void test01(){
    int a = 10;
    int b = 20;
    char c = 'c';

    cout << myAdd01(a, c) << endl;
    cout << myAdd02(a, b) << endl;
    //myAdd02(a, c); // 报错，使用自动类型推导时，不会发生隐式类型转换
    cout << myAdd02<int>(a, c) << endl; //正确，如果用显示指定类型，可以发生隐式类型转换
}

int main(){
    test01();

    system("pause");
    return 0;
}
