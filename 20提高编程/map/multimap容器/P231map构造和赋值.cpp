#include<iostream>
#include<string>
using namespace std;
#include<map>

void PrintMap(const map<int, int> &m){
    for(map<int, int>::const_iterator it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << " ";
        cout << endl;
    }
    
}

void test01(){
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
   

    PrintMap(m);

    map<int, int>m2(m);
    PrintMap(m2);

    map<int, int>m3;
    m3 = m;
    PrintMap(m3);
}

int main(){
    test01();

    system("pause");
    return 0;
}
