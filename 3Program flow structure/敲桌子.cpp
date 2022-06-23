#include<iostream>
using namespace std;
int main(){
    // for循环
    for(int i = 1; i < 101; i++){
        if((i%7 == 0) || (i%10 == 7) || (i/10 == 7)){
            cout << "bang" << " " << i << endl;
        }
    }
    
    system("pause");
}