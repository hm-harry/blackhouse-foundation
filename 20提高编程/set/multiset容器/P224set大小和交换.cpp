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
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    printSet(s1);

    if(s1.empty()){
        cout << "s1 is empty" << endl;
    }else{
        cout << "s1 size is " << s1.size() << endl;
    }

    set<int> s2;
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    s2.insert(400);
    printSet(s2);

    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}

int main(){
    test01();

    system("pause");
    return 0;
}
