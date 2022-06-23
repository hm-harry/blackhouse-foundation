#include<iostream>
#include<string>
using namespace std;
#include<vector>

void test01(){
    vector<int> v;
    v.reserve(100000);
    
    int num = 0;
    vector<int>::iterator it;
    for (int i = 0; i < 100000; i++) {
		v.push_back(i);
        if(it != v.begin()){
            it = v.begin();
            num++;
        }
    }
    // int num = 0;
	// int* p = NULL;
	// for (int i = 0; i < 100000; i++) {
	// 	v.push_back(i);
	// 	if (p != &v[0]) {
	// 		p = &v[0];
	// 		num++;
	// 	}
	// }
    cout << "num: " << num << endl;
}

int main(){
    test01();

    system("pause");
    return 0;
}
