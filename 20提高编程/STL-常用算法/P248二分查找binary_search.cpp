#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

bool myCompare(int a, int b){
    return a > b;
}

void test01(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

// 不能降序
    v.push_back(2);
    sort(v.begin(), v.end(),myCompare);
    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    bool ret = binary_search(v.begin(), v.end(), 9);
    if(ret){
        cout << "find" << endl;
    }else{
        cout << "no find" << endl;
    }
}

int main(){
    test01();

    system("pause");
    return 0;
}
