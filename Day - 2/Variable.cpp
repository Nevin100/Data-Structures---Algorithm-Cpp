//Variable : Containers to store some data
//Data type : To specify the type of the data to be store in the variable

//int ---> 4 bytes
//char ---> 1 byte
//Float ---> 4 bytes
//bool ---> true (1) & false(0) ---> 1 byte
//double --->8 bytes (2 x float size)

//sizeof operator for the number of bytes taken by the given identifier of a specific type.

//Type Casting : Conversaion from one data type to another data type
// #include <iostream>
// using namespace std;

int main(){
  int age = 45;
  float value = 45.5f;
  char grade = 'A';
  bool hehe = true;
  double v = 45.55;
  cout<<"Size (int): "<<sizeof(age)<<endl;
  cout<<"Size (float): "<<sizeof(value)<<endl; 
  cout<<"Size (char): "<<sizeof(grade)<<endl; 
  cout<<"Size (bool): "<<sizeof(hehe)<<endl; 
  cout<<"Size (double): "<<sizeof(v)<<endl; 
  return 0;
}

//Cin -->Input 

#include <iostream>
using namespace std;

int main(){
  int age;
  cout<<"Enter your Age : ";
  cin >> age;
  cout<< "Age : "<<age<<endl;
  return 0;
}