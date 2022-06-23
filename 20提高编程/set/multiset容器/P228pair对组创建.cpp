#include<iostream>
#include<string>
using namespace std;

void test01(){
    // pair<string, int>p("Tom", 20);
    // cout << "name: " << p.first << "age: " << p.second << endl;

    pair<string, int>p2 = make_pair("Jerry", 30);
    cout << "name: " << p2.first << "age: " << p2.second << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
