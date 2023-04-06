// Parameterized Constructor=  arguments present;
#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b,c;
	public:
		Addition(int x,int y) // Parametrized Constructor
	{
		a= x;
		b= y;
	}
	void putdata()
	{
		c=(a+b);
	cout<<"\naddition of a and b="<<c;
    }
};
int main()
{
	Addition a1(87,65); //Pass arguments to constructor
	a1.putdata();
	return 0;
}
