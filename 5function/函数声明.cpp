#include<iostream>
using namespace std;
// 函数声明
int max(int a, int b);

int main(){
    int a = 1;
    int b = 2;
    int num = max(a, b);
    cout << "max num = " << num << endl;
    system("pause");
    return 0;
}

int max(int a, int b){
    return a > b ? a : b;
}