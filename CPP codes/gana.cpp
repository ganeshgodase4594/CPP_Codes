//***************Multiplication Table Of N***********:
#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int N;
	
	cout<<"\n*****Multiplication Table Of 19*********:";
	cin>>N;
	for(int i=1;i<11;i++)
	{
		
		cout<<"\nN*"<<i<<"="<<(N*i);
		
	}
	return 0;
}
