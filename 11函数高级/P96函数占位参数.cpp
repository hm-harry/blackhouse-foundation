#include<iostream>
using namespace std;
//函数占位参数 ，占位参数也可以有默认参数
void func(int a, int = 10){
    cout << "func" << endl;
}

int main(){
    func(10, 10);
    func(10);
    
    system("pause");
    return 0;
}