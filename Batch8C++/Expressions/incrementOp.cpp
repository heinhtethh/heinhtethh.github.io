#include <iostream>
using namespace std;
int main(){
   int var1 = 5 , var2 = 5; 

   ++var1; //
   cout<<"After var1++, var1="<<var1;
   //post-increment
   //int result = (var2++) -2;
    //pre increment
    int result = (++var2) - 2;
   cout<<"\n Result = "<<result;
   cout<<"\n Var2 = "<< var2;




    return 0;
}