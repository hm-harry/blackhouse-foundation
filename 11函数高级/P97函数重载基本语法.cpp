#include<iostream>
using namespace std;
void func(){
    cout << "func" << endl;
}

void func(int a){
    cout << "func (int a)" << endl;
}

void func(double a){
    cout << "func (double a)" << endl;
}

void func(double a, int b){
    cout << "func(double a, int b)" << endl;
}

void func(int a, double b){
    cout << "func(int a, double b)" << endl;
}

//函数返回值不可以作为函数重载条件
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
//}

int main(){
    func();
    func(10);
    func(3.14);
    func(10, 3.14);
    func(3.14, 10);

    system("pause");
    return 0;
}