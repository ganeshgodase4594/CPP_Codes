/*
pointer to string :dispaly string usig pointer
*/
#include<iostream>
using namespace std;
int main()
{
	char str1[20],str2[20];
	char *p1,*p2;

     cout<<"\nEnter Any string:";
     cin>>str1;
     

     p1=&str1[0];
     p2=&str2[0];
     while(*p1!='\0')
     {
     	*p2=*p1;
     	p1++;
     	p2++;
	 }
	 *p2='\0';
	 cout<<"\nEnter Length of string:"<<str2;
return 0;
}
