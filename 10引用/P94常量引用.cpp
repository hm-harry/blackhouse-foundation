#include<iostream>
using namespace std;
void showValue(const int &val){//const防止误操作
    // val = 100;
    cout << "val = " << val << endl;
}

int main(){
    int a = 10;
    // 加入const 相当于int temp = 10;const int & ref = temp;
    // const int & ref = 10;
    showValue(a);

    system("pause");
    return 0;
}