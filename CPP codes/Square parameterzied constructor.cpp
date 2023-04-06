#include<iostream>
using namespace std;
class square
{
	private:
		int no;
		
		public:
	square(int x)   //parameterzied constructor
		{
			no=x;
		}
		void putdata()
		{
		cout<<"square of no n="<<(no*no);		
		}
};
int main()
{
	square s1(6),s2(21); //implicit call
	square s3=square(9); //explicit call
	square s4=square(16); //explicit call
	cout<<"\ns1 Object:";
	s1.putdata();
	cout<<"\ns2 Object:";
	s2.putdata();
	cout<<"\ns3 Object:";
	s3.putdata();
	cout<<"\n\ns4 Object:";
	s4.putdata();
	
return 0;	
}
