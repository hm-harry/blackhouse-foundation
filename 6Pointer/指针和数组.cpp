#include<iostream>
using namespace std;
// P61
int main(){
    // 定义空指针，初始化
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
    cout << "arr[0]: " << arr[0] << endl;

    int *p = arr;
    // cout << "*p: " << *p << endl;

    // p++;
    // cout << "*p++: " << *p << endl;

    for(int i = 0; i < 10; i++){
        cout << "*p: " << *p << endl;
        p++;
    }
    system("pause");
    return 0;
}