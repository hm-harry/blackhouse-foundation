#include<iostream>
using namespace std;
int main(){
    // 二维数组三种定义形式
    int arr[2][3];
    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[0][2] = 30;
    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int arr2[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    int arr3[2][3] = {1,2,3,4,5,6};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    cout << "sizeof(arr) " << sizeof(arr) << endl;
    cout << "sizeof(arr[0]) " << sizeof(arr[0]) << endl;
    cout << "hang: " << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "lie: " << sizeof(arr[0])/sizeof(arr[0][0]) << endl;
    cout << "addr: " << arr << endl;
    cout << "addr: " << &arr[0][0] << endl;
    cout << "addr: " << &arr[0][1] << endl;
    
    system("pause");
}