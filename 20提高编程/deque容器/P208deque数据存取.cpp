#include<iostream>
#include<string>
using namespace std;
#include<deque>

void printDeque(const deque<int> &d){
    for(int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < d.size(); i++){
        cout << d.at(i) << " ";
    }
    cout << endl;
}

void test01(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);

    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);

    printDeque(d1);

    cout << "first: " << d1.front() << endl;
    cout << "last: " << d1.back() << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
