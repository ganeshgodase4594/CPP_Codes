/*
string library function: length of string:
*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[20];
	int len;
	
	cout<<"\nEnter Any String:";
	cin>>str;
	
	len=strlen(str);
	
	cout<<"\nEnter Length Of String:"<<len;
	
	return 0;
}
