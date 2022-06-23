#include<iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main() {

	//局部变量
	int a = 10;
	int b = 10;

	//打印地址
	cout << "jubu a: " << &a << endl;
	cout << "jubu b: " << &b << endl;

	cout << "quanju g_a: " <<  &g_a << endl;
	cout << "quanju g_b: " <<  &g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "static int s_a " << &s_a << endl;
	cout << "static int s_b " << &s_b << endl;

	cout << "hello world " << &"hello world" << endl;
	cout << "hello world1 " << &"hello world1" << endl;

	cout << "const int c_g_a " << &c_g_a << endl;
	cout << "const int c_g_b " << &c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const int c_l_a " << &c_l_a << endl;
	cout << "const int c_l_b " << &c_l_b << endl;

	system("pause");

	return 0;
}