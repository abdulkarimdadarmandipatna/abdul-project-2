/* write a program to offer dicounts on total bill amount
program should take amount as input and calculate discount 
if bill amount <100 no discount
if bill amount is >=100 and less thann 500 then 10% discount
if bill amount is >=500 then 20% discount*/
#include<iostream>
using namespace std;
  
  int main()
  {
  	float billamount;
  	float discount=0.0;
  	cout<<" enter the amount " <<endl;
  	cin>>billamount;
  	
  	if( billamount>=500)
  	discount= (billamount*20)/100;
  else	if( billamount>100 && billamount<500)
  discount= (billamount*10)/100;
  cout<<" bill amount is " <<billamount<<endl;
  cout<<" discount is " << discount<<endl;
  cout <<" discounted is " <<billamount - discount<<endl;
  return 0;
  	
	
  }