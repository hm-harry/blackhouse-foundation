#include<iostream>
#include<string>
using namespace std;
#include<map>
#include<algorithm>
class MyCompare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};

// bool cmp(const pair<int, int> &p1, const pair<int, int> &p2){
//     return p1.second > p2.second;
// }

auto cmp = [](int v1, int v2){
    return v1 > v2;
};

void test01(){
    // map<int, int, MyCompare> m;
    map<int, int, decltype(cmp)> m(cmp);

    m.insert(make_pair(1, 10));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(2, 20));
    m.insert(pair<int, int>(4, 40));
    for(map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}

int main(){
    test01();

    system("pause");
    return 0;
}
