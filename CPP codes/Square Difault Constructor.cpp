#include<iostream>
using namespace std;
class square
{
	private:
		int no;
		
		public:
	square()   //default constructor
		{
			cout<<"\nEnter Value Of no:";
			cin>>no;
		}
		void putdata()
		{
		cout<<"square of no n="<<(no*no);		
		}
};
int main()
{
	square s1;
	s1.putdata();
return 0;	
}
