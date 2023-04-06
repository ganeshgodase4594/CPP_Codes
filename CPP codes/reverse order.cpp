#include<stdio.h>
int main()
{
	int i,n;
	
	int a[5]={56,98,65,43,76};
	
	for(int i=4;i>=0;i--)
	{
		printf("Enter all elements in reserve order:");
		printf("%d\n",a[i]);
		
	}
	return 0;
}
