#include<iostream>
#include<string>
using namespace std;
#include<deque>

void printDeque(const deque<int> &d){
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
}

void test01(){
    deque<int> d1;
    for(int i = 0; i < 10; i++){
        d1.push_back(i);
    }
    printDeque(d1);
    if(d1.empty()){
        cout << "d1 is empty" << endl;
    }else{
        cout << "d1 is not empty" << endl;
        cout << "d1.size = " << d1.size() << endl;
    }
    d1.resize(15);
    printDeque(d1);

    d1.resize(20, 1);
    printDeque(d1);

    d1.resize(5);
    printDeque(d1);
}

int main(){
    test01();

    system("pause");
    return 0;
}
