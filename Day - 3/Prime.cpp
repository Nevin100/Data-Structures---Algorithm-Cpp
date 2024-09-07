//Prime or not

#include <iostream>
using namespace std;

int main(){
  int n;
  bool isPrime = true;
  cout<<"Enter the Number : ";
  cin>>n;
  for(int i = 2; i <= (n-1); i++ ){
    if(n%i==0){
      isPrime = false;
      break;
    }
    else{
      isPrime=true;
      }
  }
  if(isPrime){
    cout<<"Your number is Prime"<<endl;
  }else{
    cout<<"Your number is not Prime"<<endl;
  }
  return 0;
}