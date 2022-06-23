#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

class Myprint{
public:
    void operator()(int val)
    {
	    cout << val << " ";
    }
};

class Greater30{
public:
    bool operator()(int value){
        return value > 5;
    }
};

void test01(){
    vector<int> v1;

    for(int i = 0; i < 10; i++){
        v1.push_back(i);
    }
    v1.push_back(5);
    v1.push_back(5);

    for_each(v1.begin(), v1.end(), Myprint());
    cout << endl;

    replace_if(v1.begin(), v1.end(), Greater30(), 3000);
    for_each(v1.begin(), v1.end(), Myprint());
    cout << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
