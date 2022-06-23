#include<iostream>
#include<string>
using namespace std;
#include<map>

void PrintMap(const map<int, int> &m){
    for(map<int, int>::const_iterator it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << " ";
    }
    cout << endl;
    
}

void test01(){
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));

    PrintMap(m);
    if(m.empty()){
        cout << "m is empty" << endl;
    }else{
        cout << "m size is: " << m.size() << endl;
    }
}

void test02(){
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));

    PrintMap(m);
    
    map<int, int> m2;
    m2.insert(pair<int, int>(5, 50));
    m2.insert(pair<int, int>(6, 60));
    m2.insert(pair<int, int>(7, 70));
    m2.insert(pair<int, int>(8, 80));

    PrintMap(m2);

    m.swap(m2);
    PrintMap(m);
    PrintMap(m2);
}

int main(){
    test02();

    system("pause");
    return 0;
}
