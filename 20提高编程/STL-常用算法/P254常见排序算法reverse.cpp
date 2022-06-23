#include<iostream>
#include<string>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << " ";
}

void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(20);
    v.push_back(30);

    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    reverse(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
