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

    pair<set<int>::iterator, bool> ret = s1.insert(10); 
    if(ret.second){
        cout << "success" << endl;
    }else{
        cout << "fail" << endl;
    }

    // ret = s1.insert(10); 
    // if(ret.second){
    //     cout << "success" << endl;
    // }else{
    //     cout << "fail" << endl;
    // }

    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    for(multiset<int>::iterator it = ms.begin(); it != ms.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
