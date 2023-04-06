/*
String Library Function: String Copy : Comparision of two strings

*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20]; 
	char str2[10];
	int x;
	
	cout<<"\nEnter first string variable:";
	cin>>str1;
	cout<<"\nEnter second string:";
	cin>>str2;
	
    x=strcmp(str2,str1);
    	
    	if(x==0)
    	{
    		cout<<"\nboth Strings Are Equal........:";
		}
		else
		{
			cout<<"\nstring are not equal.........:";
		}
	return 0;
}
