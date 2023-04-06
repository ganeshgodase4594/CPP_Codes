//This Pointer:>
#include<iostream>
using namespace std;
class Ganesh
{
	private:
	int x;
	public:
	void getdata()
	{
	this->x=456;                                                  // this pointer is working of backhround
	}                                                             //when object is called function then working of this pointer
	                                                              //less use of this pointer
	void putdata()
	{
		cout<<"\nEnter Value Of x="<<this ->x;
	}

};
int main()
{
	Ganesh g1;
	g1.getdata();
	g1.putdata();
	return 0;
}
