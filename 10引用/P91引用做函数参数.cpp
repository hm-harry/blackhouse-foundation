#include<iostream>
using namespace std;
// P91  交换
void mySwap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "mySwap01 a = " << a << endl;
    cout << "mySwap01 b = " << b << endl;
}

void mySwap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "mySwap02 a = " << a << endl;
    cout << "mySwap02 b = " << b << endl;
}

void mySwap03(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    cout << "mySwap03 a = " << a << endl;
    cout << "mySwap03 b = " << b << endl;
}

int main() {
	int a = 10;
    int b = 20;
    // mySwap01(a, b);
    // mySwap02(&a, &b);
    mySwap03(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

	system("pause");

	return 0;
}