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
    vector<int> vTarget;

    for(int i = 0; i <= 9; i++){
        v1.push_back(i);
        v2.push_back(i + 5);
    }

    vTarget.resize(v1.size() + v2.size());

    vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), itEnd, Myprint());
    cout << endl;

}

int main(){
    test01();

    system("pause");
    return 0;
}
