/*
WRITE A C++ PROGRAM TO CREATE A CLASS 'NUMBER' HAVING DATA MEMBERS a & b AND PERFORM
MATEMATICAL OPERATION LIKE ADDITION,SUBTRACTION,MULTIPLICATION,DIVISION ON TWO NUMBERS USING INLINE FUNCTION.
*/
#include<iostream>
using namespace std;
class Numbers
{
	private:
	int a,b;
	
	public:
	void getdata();
	void addition();
	void subtraction();
	void multiplication();
	void division();
};
inline void Numbers::getdata()
{
	cout<<"\nEnter Value Of a and b:";
	cin>>a>>b;
}
inline void Numbers::addition()
{
	cout<<"\nAddition Of Two Numbers="<<(a+b);
}
inline void Numbers::subtraction()
{
	cout<<"\nSubtraction Of Two Numbers="<<(a-b);
}
inline void Numbers::multiplication()
{
	cout<<"\nMultiplication Of Two Numbers="<<(a*b);
}
inline void Numbers::division()
{
	cout<<"\nDivision Of Two Numbers="<<(a%b);
}

int main()
{
	Numbers n1();
	n1.addition();
	n1.subtraction();
	n1.multiplication();
	n1.division();
	return 0;
}
