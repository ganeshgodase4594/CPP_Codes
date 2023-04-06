/*
String Library Function: String Copy
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20]; 
	char str2[10];
	cout<<"\nEnter first string variable:";
	cin>>str1;
	
	strrev(str1);
	
	cout<<"\nReverse the String:"<<str1;
	return 0;
}
