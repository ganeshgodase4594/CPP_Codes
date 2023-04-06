#include<iostream>
using namespace std;
int main()
{
//	int ans,y=14;
//
////	cout<<x;
//	ans=((++y)-(y--)+(y++));
//	
//	cout<<ans;
/////	cout<<"\n"<<y;

int ans,x=20;

ans=((--x)-(++x)+(++x)+(x++)-(x--));

cout<<ans;
cout<<"\n"<<x;

	
	return 0;
}
