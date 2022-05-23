#include <iostream>
using namespace std;
int main(){
  
  int a,b;
  a=3;
  b=5;
  bool result;

  result =(a==b);
  cout<<"\n(3 == 5): "<< result;

  result = (3 != 5)||(3 < 5);
  cout<<"\n(3 != 5)|| (3 < 5): " << result;

  result = (3 != 5)||(3 > 5);
  cout<<"\n(3 != 5)||(3 > 5): "<< result;

  result = !(3 == 5);
  cout<<"\n !(3==5): "<< result;

  result = ! ( (3==5) || (3>5) );
  cout<<"\n !((3==5)||(3>5): "<<result;

  result = ! ( (3!=5) || (3>5) );
  cout<<"\n !((3!=5)||(3>5): "<<result;


return 0;
}