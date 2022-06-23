#include<iostream>
#include<string>
using namespace std;
#include<set>

void printSet(const set<int> &s){
    for(set<int>::const_iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);

    set<int>::iterator it = s1.find(30);
    if(it != s1.end()){
        cout << "find " << *it << endl;
    }else{
        cout << "no finding" << endl;
    }
}

void test02(){
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(30);
    s1.insert(20);

    int num = s1.count(30);
    cout << "num = " << num << endl;

    num = s1.count(300);
    cout << "num = " << num << endl;
}

int main(){
    test02();

    system("pause");
    return 0;
}
