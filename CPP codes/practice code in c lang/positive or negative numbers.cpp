// check the number is positive or negative in c lang...
#include<stdio.h>
int main()
{
	int no;
	printf("\nEnter the no:");
	scanf("%d",&no);
	
	if(no>=0)
	{
		if(no==0)
		{
			printf("\nno is neither positive nor negative:");
			
		}
		else
		{
			printf("\nno is positive:");
		}
	}
	else
	{
		printf("\nno is negative:");
	}
	return 0;
	
}
