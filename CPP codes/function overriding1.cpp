/*
function overriding:: Same function name in base class and derived class then base class function
overrided to derived class function
*/

#include<iostream>
using namespace std;

class base
{ 
    public:
	void display()
	{
		cout<<"\nI'm A Base Class:";
		
	}
};
class derived:public base
{
	public:
	void display()
	{
		cout<<"\nI'm A derived Class:";
	}
};
int main()
{
	base d1;
	d1.display();
	return 0;
}
