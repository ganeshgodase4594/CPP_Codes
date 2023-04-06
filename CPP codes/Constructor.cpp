#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		//Creating a Constructor
		//Constructor is a special member function with the same name as of the class:
		//it is used to initialize the object of its class
		//it is automatically invoked whenever an object is created
		Complex()
		{
			cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
		}
};
complex::Complex(void)//----->This is a default constructor as it takes no parameters
{
	a=10;
	b=0;
	//cout<<"Hellow World";
}
int main()
{
Complex c1,c2,c3;
c1.printNumber();
c2.printNumber();
c3.printNumber();
return 0;	
}

