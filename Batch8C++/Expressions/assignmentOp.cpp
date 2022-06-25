#include <iostream > 
using namespace std;

int main(){
  int a,b;
  a = 7;
  b = 2;

  cout <<"a = "<< a;
  cout <<"\nb ="<< b;

  a += b;// a = a+b = 7+2 = 9;
  cout <<"\n After a += b:, a = "<<a;

  b %= 2;
  cout<<"\n After b %= 2, b = "<<b;

  

 return 0; 
}

