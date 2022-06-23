#include<iostream>
using namespace std;
// P63
void bubbleSort(int *arr, int len){
    for(int i = 0; i < len - 2; i++){
        for(int j = i + 1; j < len - 1; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArrary(int * arr, int len){
    for(int i = 0; i < len; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {2, 4, 0, 6, 5, 7, 1, 3, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    printArrary(arr, len);

    system("pause");
    return 0;
}