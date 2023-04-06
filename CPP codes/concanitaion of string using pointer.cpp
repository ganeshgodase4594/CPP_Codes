/*
pointer to strig: concanitaion of string using pointer
*/
#include<iostream>
using namespace std;
int main()
{
	char str1[20],str2[30];
	char *p1,*p2;
		cout<<"\nEnter first string:";
		cin>>str1;
		cout<<"\nEnter second string:";
		cin>>str2;
		
		p1=&str1[0];
		p2=&str2[0];
	    
	    while(*p1!='\0')
	    {
	    	p1++;
		}
		while(*p2!='\0')
		{
			*p1=*p2;
			p1++;
			p2++;
		}
		*p1='\0';
		cout<<"\nconcanete string="<<str1;
	return 0;
}
