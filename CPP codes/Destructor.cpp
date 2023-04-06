#include<iostream>
using namespace std;
int count=0;         //Global variable
class Alpha
{
	public:
		Alpha()
	{
		count++;
		cout<<"\nObject Created:"<<count;
	}
	~Alpha()
	{
		cout<<"\nObject Destroyed:"<<count;
		count--;
	}
};
int main()
{
	Alpha a1,a2; 
	Alpha a3;
	{
		Alpha a4;
	}
	return 0;
}
