#include<iostream>
#include<string>
using namespace std;
#include<list>

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01(){
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);

    printList(L1);

    L1.reverse();
    printList(L1);
}

bool myCompare(int v1, int v2){
    return v1 > v2;
}

// 排序
void test02(){
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);

    printList(L1);

    L1.sort(); //默认的排序规则 从小到大
    printList(L1);

    L1.sort(myCompare); //默认的排序规则 从小到大
    printList(L1);
}

int main(){
    test02();

    system("pause");
    return 0;
}
