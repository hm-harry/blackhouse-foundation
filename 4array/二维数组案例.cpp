#include<iostream>
#include<string>
using namespace std;
int main(){
    // 二维数组三种定义形式
    int arr[3][3] = {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    
    string names[3] = {"zhangsan","lisi","wangwu"};

    for(int i = 0; i < 3; i++){
        int total = 0;
        for(int j = 0; j < 3; j++){
            total += arr[i][j];
        }
        cout << names[i] << " score:" << total << endl;
    }

    system("pause");
}