#include<iostream>
#include<string>
using namespace std;
#include<map>
void test01(){
    map<int, int> m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(2, 20));
    m.insert(pair<int, int>(3, 40));

    map<int, int>::iterator pos = m.find(3);

    if(pos != m.end()){
        cout << (*pos).first << " " << (*pos).second << endl;
    }else{
        cout << "no find" << endl;
    }

    int num = m.count(3);
    cout << "num = " << num << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
