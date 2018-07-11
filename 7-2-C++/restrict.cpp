#include<iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	int a = 5;
	//int *__restrict pre = (int *)malloc(sizeof(int));
	int *__restrict pre = &a;
//	*pre = 9;
	int *p = &a;
//	p = pre;
//	*p = 8;
	
	
	cout << *pre << endl;
	cout << *p <<endl;
	return 0;
}
