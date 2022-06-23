#include<iostream>
using namespace std;
int main(){
    // 数组三种定义形式
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[0] << endl;

    int arr2[5] = {10,20,30};//如果初始化没有初始化全，用0补全
    for(int i = 0; i < 5; i++){
        cout << arr2[i] << endl;
    }

    int arr3[] = {10,20,30};
    for(int i = 0; i < 3; i++){
        cout << arr3[i] << endl;
    }
    system("pause");
}