/* 
function overloading
*/

#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b;
		
	public:
		Addition()
		{
			a=0;
			b=0;
		}
		
		void getdata()
		{
			a=100;
			b=300;
		}
		
		void getdata(int x)
		{
			a=x;
			b=250;
		}
			
		void getdata(int m,int n)
		{
			a=m;
			b=n;
		}
		
		void display(Addition a)
		{	
			
			
			cout<<"\Enter Addition Of a & b:"<<(a.a+a.b);
		}
};
int main()
{
	Addition a1,a2,a3,a4;
	a1.getdata();
	a2.getdata(250);
	a3.getdata(200,300);
	cout<<"\nObject 1:";
//	a1.display();
	cout<<"\nObject 2:";
//	a2.display();
	cout<<"\nObject 3:";
	
	a4.display(a3);
	return 0;
}
