#include<iostream>
using namespace std;
void test01(){
    cout << "this is test01: " << endl;
}

void test02(int a){
    cout << "this is test02: " << a << endl;
}

int test03(){
    return 10;
}

int test04(int a){
    return a;
}
int main(){
    int a = 1;

    test01;
    test02(a);
    int num1 = test03();
    cout << "this is test03: " << num1 << endl;
    int num2 = test04(a);
    cout << "this is test04: " << num2 << endl;
    
    system("pause");
    return 0;
}