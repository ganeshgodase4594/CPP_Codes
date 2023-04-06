#include<iostream>
using namespace std;
int addition(int a,int b)
{
	return a+b;
	
}
int subtraction(int a,int b)
{
	return a-b;

}
int multiplication(int a,int b)
{
	return a*b;
}
int division(int a,int b)
{
	return a%b;
}
int main()
{
	int a,b,addiation,subtraction,multiplication,division;
	cout<<addiation(a,b)<<endl;
	cout<<subtraction(a,b)<<endl;
	cout<<multiplication(a,b)<<endl;
	cout<<division(a,b)<<endl;
	cin>>a>>b;
	
	if(a+b)
	{
		if(a-b)
		{
			cout<<addiation;
		}
		else
		{
			cout<<subtraction;
		}
	}
	else
	{
		if(a*b)
		{
			cout<<multiplication;
		}
		else
		{
			cout<<division;
		};
	}
	
	return 0;
}
