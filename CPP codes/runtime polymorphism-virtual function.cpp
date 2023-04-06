/*
runtime polymorphism: virtual function
*/
#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()
	{
	cout<<"\nI'm A Base Class:";	
	}
		
};
class derived:public base
{
	public:
	void display()
	{
	cout<<"\nI'm A Derived Class:";	
	}
	
	
};
int main()
{
	base b1;
	derived d1;
	base *bptr;
	
	cout<<"\nbptr points to base class";
	bptr=&b1;
	bptr->display();
	
	cout<<"\nbptr points to be derived class:";
	bptr=&d1;
	
	
	bptr->display();
	
	return 0;
}
