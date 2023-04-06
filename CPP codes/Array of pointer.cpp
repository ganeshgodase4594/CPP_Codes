#include<iostream>
using namespace std;
int main()
{
	int a[5],*ptr,i;
	ptr=&a[5];
	ptr=&a[0];
	
	cout<<"\nEnter five array elements:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		
	}
	cout<<"\nEnter array Elements are:";
	for(i=0;i<5;i++)
	{
	cout<<a[i]<<"\t";
	ptr++;	
	}
	return 0;
 } 
