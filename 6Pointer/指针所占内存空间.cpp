#include<iostream>
using namespace std;
int main(){
    // 指针变量64位处理器占8位 32位处理器占4位
    int a = 10;
    int * p = &a;

    cout << "sizeof(*): " << sizeof(p) << endl;
    cout << "sizeof(*): " << sizeof(char *) << endl;
    cout << "sizeof(*): " << sizeof(int *) << endl;
    cout << "sizeof(*): " << sizeof(double *) << endl;
    cout << "sizeof(*): " << sizeof(float *) << endl;

    system("pause");
    return 0;
}