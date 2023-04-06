#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int n;
    cout<<"\nEnter the size of the word: ";
    cin>>n;
    
    char arr[n+1];

    cout<<"\nEnter The word:";
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==1)
    {
        cout<<"\nword is palindrome:";
    }
    else{
        cout<<"\nWord is not palindrome:";
    }

    return 0;
}
