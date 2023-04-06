/*
pointer to string :dispaly string usig pointer
*/
#include<iostream>
using namespace std;
int main()
{
	char str[20];
	char *ptr;
	int len=0;
     cout<<"\nEnter Any string:";
     cin.getline(str,20);

     ptr=&str[0];
     while(*ptr!='\0')
     {
     	len=len+1;
     	ptr++;
	 }
	 cout<<"\nEnter Length of string:"<<len;
	return 0;
}
