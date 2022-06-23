#include<iostream>
#include<string>
using namespace std;
#include<stack>

void test01(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.size() << endl;

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    cout << s.size() << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
