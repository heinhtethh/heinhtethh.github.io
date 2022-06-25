#include <iostream>
using namespace std;
int main(){
   
   //declare var;
   int price;
   int quantity;
   int discount = 10;

   //input from user;
   cout<<"Enter Your price: ";
   cin>>price;

   cout<<"Enter total quantity: ";
   cin>>quantity;
   
   //calculate the total price to know if you can get a discount
   int totalprice = price * quantity;
    
   //calculate the total expense if you can get discount 10%
   int totalExpense = totalprice - (totalprice/100) * 10;

   if (totalprice >= 5000)
   {
       cout<<"You will get discount 10%.\n";
   }
   else{
       cout<<"You can't get discount 10%.";
   }
    if (totalprice >= 5000){
       cout<<"Your total expense is "<<totalExpense;
   }

   return 0;
}