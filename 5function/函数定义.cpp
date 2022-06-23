#include<iostream>
using namespace std;
int add(int num1, int num2){
    int total;
    total = num1 + num2;
    return total;
}

int main(){
    int a = 1;
    int b = 2;
    int total;
    total = add(a, b);
    cout << "total = " << total << endl;
    system("pause");
    return 0;
}