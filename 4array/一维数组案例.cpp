#include<iostream>
using namespace std;
int main(){
    // 数组三种定义形式
    int arr[5] = {300, 350, 200, 400, 250};
    int max = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << "max = " << max << endl;
    
    system("pause");
}