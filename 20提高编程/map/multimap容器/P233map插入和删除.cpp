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
    m.insert(make_pair(2, 20));
    m.insert(map<int, int>::value_type(3, 30));
    m[4] = 40;// 不建议插入数，可以利用可以key找到value

    PrintMap(m);

    m.erase(m.begin());
    PrintMap(m);

    m.erase(3);// 按照key来删除
    PrintMap(m);

    m.erase(m.begin(), m.end());
    PrintMap(m);

    m.clear();
    PrintMap(m);
}

int main(){
    test01();

    system("pause");
    return 0;
}
