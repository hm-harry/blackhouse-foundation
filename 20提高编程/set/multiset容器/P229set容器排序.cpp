#include<iostream>
#include<string>
using namespace std;
#include<set>

class Mycompare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};

void printSet(const set<int> &s){
    for(set<int>::const_iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void printSet2(const set<int, Mycompare> &s){
    for(set<int, Mycompare>::const_iterator it = s.begin(); it != s.end(); it++){
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
    printSet(s1);

    set<int, Mycompare> s2;
    s2.insert(10);
    s2.insert(30);
    s2.insert(40);
    s2.insert(20);
    printSet2(s2);
}

int main(){
    test01();

    system("pause");
    return 0;
}
