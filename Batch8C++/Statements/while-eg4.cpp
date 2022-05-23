#include<iostream>
using namespace std;
int main(){
   int i = 1;

   while( i < 6 ){
       if( i % 2 ){
           cout<<i<<" is odd number";
           cout<<"\n";
       }
       i++;
   }


    return 0;
}