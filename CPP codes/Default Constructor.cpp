// Default Constructor= no arguments;
#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b,c;
	public:
		Addition() // default Constructor
	{
		cout<<"\nEnter Value Of a and b:";
		cin>>a>>b;
	}
	void putdata()
	{
		c=(a+b);
	cout<<"\naddition of a and b="<<c;
    }
};
int main()
{
	Addition a1;
	a1.putdata();
	return 0;
}
