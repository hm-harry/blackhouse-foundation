#include<iostream>
using namespace std;
int main(){
    int a = 100;
    int ge = 0;
    int shi = 0;
    int bai = 0;
    while (a < 1000)
    {
        ge = a % 10;
        shi = a / 10 % 10;
        bai = a / 100;
        if((ge*ge*ge + shi*shi*shi + bai*bai*bai) == a){
            cout << a << endl;
        }
        a++;
    }
    

    system("pause");
}