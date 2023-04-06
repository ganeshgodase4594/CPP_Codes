#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[n],i,k;

    cout<<"\nEnter The Size Of Array:";
    cin>>n;
   cout<<"\nenter the kth element: ";
   cin>>k;
   
   cout<<k;
    cout<<"\nEnter The No in Array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
	cout<<"\nEnlement in array: ";
    for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
        
        

//    cout<<a[k-1]<<"\n"<<a[n-k];

cout<<a[0];
cout<<a[k];
    

    return 0;
}
