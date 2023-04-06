/*
consructor overloading:
*/
#include<iostream>
using namespace std;
class Ganesh
{
	private:
		int a;
	public:
		Ganesh()
		{
			a=59;
		}
		Ganesh(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"\nEnter value of a:"<<a;
		}
};
int main()
{
Ganesh g1;
Ganesh g2(78);
g1.display();
g2.display();	
}
