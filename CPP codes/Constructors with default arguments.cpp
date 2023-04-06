// Constructors with default arguments;
#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b;
		public:
			Addition(int x,int y=50)
			{
			a=x;
			b=y;	
			}
			void display()
			{
				cout<<"\nAddition Of a and b="<<(a+b);
			}
};
int main()
{
	Addition a1(65,87);
	a1.display();
	return 0;
}
