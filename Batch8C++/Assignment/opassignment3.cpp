#include <iostream>
using namespace std;

int main(){
   //input loan amount
   int loan;
   cout<<"Enter loan amount: ";
   cin>>loan;

   //input rate amount
   int rate;
   cout<<"Enter rate amount: ";
   cin>>rate;

   //input months
   int months;
   cout<<"Enter months: ";
   cin>>months;

   int monthly = (loan/100)*rate;
   cout<<"Monthly interest is: "<<monthly;

   int totalInterest = monthly * months;
   cout<<"\nYour interest is: "<<totalInterest;

   return 0;
}