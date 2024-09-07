//Conditional Statements : 

//1.If-Else
#include <iostream>
using namespace std;

int main(){
  int age;
  cout<<"Enter the age : ";
  cin>>age;
  if (age < 18){
    cout<<("Non-Adult");
  }
  else{
    cout<<("Adult");
  }
  return 0;
}

//2.If-Else-if-Else-if...
#include <iostream>
using namespace std;

int main(){
  int marks;
  cout<<"Enter the Marks : ";
  cin>>marks;
  if(marks>=90){
    cout<<("Grade : A")<<endl;
  }
  else if(marks>=80 && marks < 90){
    cout<<("Grade : B")<<endl;
  }
  else if(marks>=70 && marks < 80){
    cout<<("Grade : C")<<endl;
  }
  else{
    cout<<("Try your best next time!!");
  }
  return 0;
}

//Ternary Statement : 
#include <iostream>
using namespace std;

int main(){
  int val = 45;
  cout<< (val >= 0 ? "positive" : "negative");
  return 0;

}
