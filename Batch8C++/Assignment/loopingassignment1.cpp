#include<iostream>
using namespace std;
int main(){

    int start_num, end_num;

    cout<<"Enter start number: ";
    cin>>start_num;

    cout<<"Enter end number: ";
    cin>>end_num; 

    cout<<"Display output divisible by 5 and 8: \n";

       
    for (int i = start_num; i < end_num; i++){
         
        if (i % 5 == 0 && i % 8 == 0)
          {
            cout<<i<<" "<< "\n";
          };
           
    }

    cout<<"Display output divisible by only 8: \n";

       
    for (int i = start_num; i < end_num; i++){
         
        if ( i % 8 == 0)
          {
            cout<<i<<" "<< "\n";
          };
           
    }

    cout<<"Display output divisible by only 5: \n";

       
    for (int i = start_num; i < end_num; i++){
         
        if ( i % 5 == 0)
          {
            cout<<i<<" "<< "\n";
          };
           
    }

    cout<<"Display output not divisible by 5 and 8: \n";

       
    for (int i = start_num; i < end_num; i++){
         
        if (i % 5 != 0 && i % 8 != 0)
          {
            cout<<i<<" "<< "\n";
          };
           
    }

         
    return 0;

}