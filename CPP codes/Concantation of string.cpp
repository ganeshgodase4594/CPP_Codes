/*
String Library Function: Concantation of string
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
	cout<<"\nEnter Second string:";
	cin>>str2;
	
	strcat(str1,str2);
	
	cout<<"\nConcantation of String:"<<str1;
	return 0;
}
