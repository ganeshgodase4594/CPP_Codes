//pointer
#include<iostream>
using namespace std;
int main()
{
	int a=120;
	int *p;
	p=&a;
	cout<<"\nValue of a="<<a;
	cout<<"\nValue of *p="<<*p;
	cout<<"\nEnter value of &a="<<&a;
	cout<<"\nEnter value of &p="<<&p;
	return 0;
}
