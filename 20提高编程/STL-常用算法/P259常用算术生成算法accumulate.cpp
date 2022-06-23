#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<numeric>

void test01(){
    vector<int> v;
    for(int i = 0; i <= 100; i++){
        v.push_back(i);
    }
    // 参数3是起始的累加值
    int total = accumulate(v.begin(), v.end(), 1000);
    cout << total << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
