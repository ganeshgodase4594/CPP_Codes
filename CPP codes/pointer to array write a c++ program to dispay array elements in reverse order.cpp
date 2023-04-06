 /* 
pointer to array: erite a c++ program to dispay array elements in reverse order
*/

#include<iostream>
using namespace std;
int main()
{
	int a[5],i,*ptr;
	cout<<"\nEnter five array elements:";
	for(i=0;i<5;i++)
	{
       cin>>a[i];
	}
	ptr=&a[4];
	cout<<"\nEnter Your Array Elements In Reverse Order:";
	for(i=0;i<5;i++)
	{
		cout<<*ptr<<"\t";
		ptr--;
	}
	return 0;
}

