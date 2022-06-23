#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int c = 0;

    c = (a > b ? a : b);
    cout << "c = " << c << endl;

    (a > b ? a : b) = 100;//返回的是变量，前面是真选a，前面是假选b
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}