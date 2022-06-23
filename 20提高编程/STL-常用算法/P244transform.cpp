#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

class Transform{
public:
    int operator()(int v){
        return v + 100;
    }
};

class Myprint{
public:
    void operator()(int val){
        cout << val << " ";
    }
};

void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);

    vector<int> vTarget;
    vTarget.resize(v.size());

    transform(v.begin(), v.end(), vTarget.begin(), Transform());

    for_each(vTarget.begin(), vTarget.end(), Myprint());
    cout << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
