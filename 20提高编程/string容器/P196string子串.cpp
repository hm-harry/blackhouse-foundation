#include<iostream>
#include<string>
using namespace std;
void test01(){
    string str = "abcdef";
    string subStr = str.substr(1, 3);

    cout << "subStr = " << subStr << endl;
}

void test02(){
    string str = "hello@163.com";
    int pos = str.find("@");

    string subStr = str.substr(0, pos);
    cout << "subStr = " << subStr << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
