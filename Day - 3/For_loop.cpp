// //for Loop : 

// //Q.)Sum (1 - 10)
// #include <iostream>
// using namespace std;

// int main(){
//   int count = 5;
//   int sum = 0;
//   for(int i = 0;i <= count;i++){
//     sum += i;
//   }
//   cout<<"The Sum :"<<sum<<endl;
//   return 0;
// }

//Q.)Sum of All Odd integers(1-50)
#include <iostream>
using namespace std;

int main(){
  int count = 50;
  int sum = 0;
  for(int i = 1;i<=count;i++){
    if(i%2==0){
      continue;
    }
    else{
      sum += i;
    }
  }
  cout<<"The Sum : "<<sum<<endl;
  return 0;
}