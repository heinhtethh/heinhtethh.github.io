#include<iostream>
using namespace std;

int main(){
     
     int a,b;
     a = 3;
     b = 5;
     bool result;

     result = (a == b);
     cout<<a <<" == "<<b<<" : "<<result<<"\n"; // 3 == 5 : 0;

     result = (a != b);
     cout<<a <<" != "<<b<<" : "<<result<<"\n"; // 3 != 5 : 0;

     result = (a > b);
     cout<<a <<" > "<<b<<" : "<<result<<"\n"; // 3 > 5 : 0;

     cout<<a <<" < "<<b<<" : "<<(a < b)<<"\n"; 

     cout<<a <<" <= "<<b<<" : "<<( a<=b )<<"\n"; // 3 <= 5 : 0;

      cout<<a <<" >= "<<b<<" : "<<( a>= b )<<"\n"; // 3 >= 5 : 0;
}
