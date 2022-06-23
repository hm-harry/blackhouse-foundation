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

void test01(){
    vector<int> v1;
    vector<int> v2;
    vector<int> vTarget1, vTarget2;

    for(int i = 0; i <= 9; i++){
        v1.push_back(i);
        v2.push_back(i + 5);
    }

    vTarget1.resize(max(v1.size() , v2.size()));
    vTarget2.resize(max(v1.size() , v2.size()));

    vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget1.begin());
    for_each(vTarget1.begin(), itEnd1, Myprint());
    cout << endl;

    vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget2.begin());
    for_each(vTarget2.begin(), itEnd2, Myprint());
    cout << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
