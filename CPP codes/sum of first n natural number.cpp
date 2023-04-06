//sum of first natural n numbers
#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	int sum=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		sum=(sum+i);
		cout<<"\nEnter Sum Of First n Natual Number="<<sum;
		
	}
	return 0;
}
