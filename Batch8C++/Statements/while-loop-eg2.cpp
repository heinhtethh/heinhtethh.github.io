#include<iostream>
using namespace std;
int main (){
   
   int i = 0, j = 10;
   while(i < 5 && i >= 10)
   {
      cout<<"i = "<<i<<"\tj = "<<j;
      cout<<"\n";
      i++;
      j--;
   }


    return 0;
}