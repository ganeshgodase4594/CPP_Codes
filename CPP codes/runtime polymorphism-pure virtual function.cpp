/*
runtime polymorphism:pure virtual function
*/
#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()=0;
      
		
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

	derived d1;
	base *bptr;

	cout<<"\nbptr points to be derived class:";
	bptr=&d1;
	
	
	bptr->display();
	
	return 0;
}
