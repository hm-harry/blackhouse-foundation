#include<iostream>
using namespace std;
// P88
int * func()
{
	int * a = new int(10);
    return a;
    
}

int * test01()
{
    int * p = func();
    delete p;//释放内存
    return p;
}

int * test02()
{
    int * arr = new int[10];

    for(int i = 0; i < 10; i++){
        arr[i] = i + 100;
    }
    delete[] arr;//释放内存加[]
    return arr;
}

int main() {
	int * p = test02();

	// cout << *p << endl;
	// cout << *p << endl;

    for(int i = 0; i < 10; i++){
        cout << *p + i << endl;
        // cout << "p + i" << endl;
    }

	system("pause");

	return 0;
}