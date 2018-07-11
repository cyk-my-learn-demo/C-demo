#include<iostream>
using namespace std;
int main()
{
	string a = "hello";
	string b = new string("world");
	cout << a << endl;
	cout << b << endl;
	a = a + b;
	cout << a << endl;
	return 0;
}
