#include<iostream>
#include<string>
using namespace std;
#include<vector>

void printVector(vector<int>& v){
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    vector<int> v1;
    for(int i = 0; i < 10; i++){
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for(int i = 10; i > 0; i--){
        v2.push_back(i);
    }
    printVector(v2);

    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

// 实际用途
void test02(){
    vector<int> v1;
    for(int i = 0; i < 100000; i++){
        v1.push_back(i);
    }
    cout << "v1.cacapacity: " << v1.capacity() << " " << "v1.size: " << v1.size() << endl;

    v1.resize(3);
    cout << "v1.cacapacity: " << v1.capacity() << " " << "v1.size: " << v1.size() << endl;

    // 巧用swap收缩空间
    vector<int>(v1).swap(v1);//vector<int>(v1)匿名对象 目前只有3
    cout << "v1.cacapacity: " << v1.capacity() << " " << "v1.size: " << v1.size() << endl;
}

int main(){
    test02();

    system("pause");
    return 0;
}
