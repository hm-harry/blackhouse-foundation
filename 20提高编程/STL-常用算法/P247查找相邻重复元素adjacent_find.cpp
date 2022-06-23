#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

void test01(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
    if(pos == v.end()){
        cout << "no finding" << endl;
    }else{
        cout << "find: " << *pos << endl;
    }
}

int main(){
    test01();

    system("pause");
    return 0;
}
