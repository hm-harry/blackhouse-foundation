#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

class GreaderFive{
public:
    bool operator()(int val){
        return val > 5;
    }
};

void test01(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(),GreaderFive());
    if(it == v.end()){
        cout << "no find" << endl;
    }else{
        cout << *it << endl;
    }
}

int main(){
    test01();

    system("pause");
    return 0;
}
