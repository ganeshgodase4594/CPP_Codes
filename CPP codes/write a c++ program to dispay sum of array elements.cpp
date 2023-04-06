 /* 
pointer to array: write a c++ program to dispay sum of array elements
*/

#include<iostream>
using namespace std;
int main()
{
	int a[5],i,*ptr,sum=0;
	cout<<"\nEnter five array elements:";
	for(i=0;i<5;i++)
	{
       cin>>a[i];
	}
	ptr=&a[0];
	for(i=0;i<5;i++)
	{
		sum=sum+*ptr;
		
		cout<<"\nEnter Sum Of Array Elements:"<<sum;
		ptr++;
	}
	return 0;
}

