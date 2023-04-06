// Parameterized Constructor=  arguments present;
#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b,c;
	public:
		void get_info(int x,int y) // Parametrized Constructor
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
	Addition a1; //Pass arguments to constructor
	a1.get_info(65,87);
	a1.putdata();
	return 0;
}
