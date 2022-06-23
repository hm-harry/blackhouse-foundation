#include<iostream>
using namespace std;
//函数重载注意事项

void func(int &a){
    cout << "func(int &a)" << endl;
}

void func(const int &a){
    cout << "func(const int &a)" << endl;
}

void func2(int a){
    cout << "func2(int a)" << endl;
}

void func2(int a, int b = 10){
    cout << "func2(int a)" << endl;
}
int main(){
    int a = 10;
    // func(a);//调用无const
    // func(10);//调用有const

    // func2(10);//碰到默认参数产生歧义，需要避免

    system("pause");
    return 0;
}