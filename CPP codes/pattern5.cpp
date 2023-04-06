
//       *
//      **
//     ***
//    ****
//   *****




#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"\nEnter The No Of Rows";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(i+j<=rows)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }

            
        }
        cout<<"\n";
    }
    return 0;
}