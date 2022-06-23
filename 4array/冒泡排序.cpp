#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 4, 0, 6, 5, 7, 1, 3, 8, 9};
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 10; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
    system("pause");
}