#include<iostream>
#include<string>
using namespace std;
#include<vector>

void printVector(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void test01(){
    vector<int> v1;
    for(int i = 0; i < 10; i++){
        v1.push_back(i);
    }
    printVector(v1);
    cout << "first: " << v1.front() << endl;
    cout << "last: " << v1.back() << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
