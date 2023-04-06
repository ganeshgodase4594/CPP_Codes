#include<stdio.h>
int main()
{
	int no1,no2;
	printf("\nEnter no1 & no2 :");
	scanf("%d %d",&no1,&no2);
	
	if(no1>no2)
	{
		printf("\n%d is greatest number:",no1);
	}
	else if(no2>no1)
	{
	printf("\n%d is greatest number :",no2);
	}
	else
	{
		printf("\n%d %d are equal:",no1,no2);
	}
	return 0;
}
