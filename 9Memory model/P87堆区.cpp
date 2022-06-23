#include<iostream>
using namespace std;
// P87
int * func()
{
	int* a = new int(10);
    return a;
    
}

int main() {
	int *p = func();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}