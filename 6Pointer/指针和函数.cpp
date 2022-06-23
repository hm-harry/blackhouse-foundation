#include<iostream>
using namespace std;
// P62
void swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int a = 10;
    int b = 20;
    swap(&a, &b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    system("pause");
    return 0;
}