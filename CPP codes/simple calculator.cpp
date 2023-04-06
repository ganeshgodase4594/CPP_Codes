#include<iostream>
using namespace std;
 int main()
 {
 	char opr;
 	int num1,num2;
// 	cout<<"\nEnter Opreator Like +,-,*,/:";
// 	cin>>opr;
 
 	
 	int ch;
 
 	
 	do
 	{
 		cout<<"\n1.Addition";
 		cout<<"\n2.Subtract";
 		cout<<"\n3.Multiplication";;
 		cout<<"\n4.Division";
 		cout<<"\n5.Exit";
 		
 	cout<<"\nEnter your choice: ";
 	cin>>ch;
 	cout<<"\nEnter Two Numbers:";
 	cin>>num1>>num2;
 			switch(ch)
 	{
 		case 1:
 			cout<<"\nAddition Of Two Numbers:"<<num1+num2;
 			break;
 			
 		case 2:
		    cout<<"\nSubtraction Of Two Numbers:"<<num1-num2;
			break;	
 		
		 case 3:
		    cout<<"\nMultiplication Of Two Numbers:"<<num1*num2;
			break;
			
		case 4:
		    cout<<"\nDivision Of Two Numbers:"<<num1/num2;
			break;
		
		default:
		    cout<<"\nError! Your Opreator Is Incorrect:";
			break;		
	 }
 		
	 }while(ch!=5);
 	
 
 	return 0;
 }

