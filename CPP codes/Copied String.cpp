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
	
	strcpy(str2,str1);
	
	cout<<"\nEnter Copied String:"<<str2;
	return 0;
}
