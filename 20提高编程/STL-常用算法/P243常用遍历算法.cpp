#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>
// 遍历算法for_each
void print01(int val){
    cout << val << " ";
}

class print02{
public:
    void operator()(int val){
        cout << val << " ";
    }
};

auto print03 = [](int val){cout << val << " ";};
void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);

    for_each(v.begin(), v.end(), print01);
    cout << endl;

    for_each(v.begin(), v.end(), print02());
    cout << endl;

    for_each(v.begin(), v.end(), print03);
    cout << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
