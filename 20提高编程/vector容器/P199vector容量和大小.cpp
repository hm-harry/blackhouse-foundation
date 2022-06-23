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
    if(v1.empty()){
        cout << "v1 is empty" << endl;
    }else{
        cout << "v1 is not empty" << endl; 
        cout << "v1.capacity() = " << v1.capacity() << endl; 
        cout << "v1.size() = " << v1.size() << endl; 
    }

    // v1.resize(15);
    // printVector(v1);

    // v1.resize(15, 100);
    // printVector(v1);

    v1.resize(5);
    printVector(v1);
}

int main(){
    test01();

    system("pause");
    return 0;
}
