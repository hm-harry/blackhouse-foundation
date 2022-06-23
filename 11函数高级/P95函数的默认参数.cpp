#include<iostream>
using namespace std;
// 函数的默认参数
int func(int a, int b = 20, int c = 30){
    return a + b + c; 
}

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
// int func2(int a, int b = 20, int c){
//     return a + b + c; 
// }

//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数，只能有一个设置默认参数
int func2(int a = 10, int b = 10);

int func2(int a, int b){
    return a + b;
}

int main(){
    cout << func(1, 2, 3) << endl;
    cout << func(10) << endl;
    cout << func(10, 30) << endl;

    cout << func2(10, 30) << endl;
    
    system("pause");
    return 0;
}