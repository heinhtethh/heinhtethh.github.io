#include <iostream>
using namespace std;
 int main(){
       
       //var
       float bmi;
       //user input
       cout<<"Enter your bmi value: ";
       cin>>bmi;
       //veri
       if( bmi < 18.5)
       {
           cout<<"Underweight";
       }
       else{
           if(bmi>=18.3 && bmi <=24.9){
               cout<<"Normal weight";
           }
           else{
               if(bmi >= 25 && bmi <= 29.9){
                   cout<<"Over weight";
               }
               else{
                   cout<<"Obesity";
               }
           }
       }
       

     return 0;
 }