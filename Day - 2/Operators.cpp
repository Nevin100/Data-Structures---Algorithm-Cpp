//Operator : Special Symbols to perform some task 

#include <iostream>
using namespace std;
//1. Binary :-->
//Arithmetic,Relational and logical 

int main()
{
  int a = 10;
  int b = 5;
  int sum = a+b;
  int product = a*b;
  int quotient = a/b;
  int remainder = a%b; 
  int difference = a-b;
  cout<<"Sum : "<<sum<<endl;
  cout<<"Product : "<<product<<endl;
  cout<<"Quotient : "<<quotient<<endl;
  cout<<"Remainder : "<<remainder<<endl;
  cout<<"Difference : "<<difference<<endl;
  
  //Relational
  cout<<(3<5)<<endl;//-->true(1)
  cout<<(3>5)<<endl;//false(0)

  //logical
  cout<<((3<5)||(5>6))<<endl;//OR----> any one true then (1);
  cout<<((3<5)&&(5>6))<<endl;//AND----> Both true then (1);
  cout<<!(3<5);//NOT--->Compliment the state

  return 0;
}

//2.Unary -->
//pre: pehle update fir kaam 
//post: pehle kaam fir update

#include <iostream>
using namespace std;

int main(){
  int i = 0;
  int j = 0;
  int k = 1;
  int l = 1;
  cout<<"Pre-increment : "<<++i<<endl;
  cout<<"Post-increment : "<<j++<<endl;
  cout<<"Pre-decrement : "<<--k<<endl;
  cout<<"Post-decrement : "<<l--<<endl;
  return 0;
}
