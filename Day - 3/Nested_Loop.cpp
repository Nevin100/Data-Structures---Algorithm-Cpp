//Nested loop --> Next class complete

#include <iostream>
using namespace std;

int main(){
  int n = 10;
  for (int i = 1; i <= n; i++){//Lines
    int m = 10;
    for(int j = 1;j <= m; j++){//per line starts
      cout<<"*"<<" ";
    }
  cout<<endl;
  }
  return 0;
}