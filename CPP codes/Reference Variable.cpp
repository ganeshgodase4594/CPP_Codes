//Reference Variable
#include<iostream>
using namespace std;
int main()
{
	int m=989;
	int &n=m;                  //n is a reference variable of m:->>
	cout<<"\nValue of m="<<m;
	cout<<"\nValue of n="<<n;
	n=6654;
	cout<<"\nValue of m="<<m;
	cout<<"\nValue of n="<<n;
	cout<<"\nSize Of n="<<sizeof(n);
	return 0;
}
