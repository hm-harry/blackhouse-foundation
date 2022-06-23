#include<iostream>
using namespace std;
int main(){
    // for循环
    for(int i = 0; i < 10; i++){
        if (i % 2 == 0)
        {
            continue;
        }
        
        cout << i << endl;
        
    }
    
    system("pause");
}