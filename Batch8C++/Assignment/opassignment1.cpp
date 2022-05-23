#include <iostream>
using namespace std;
int main(){
    int price;
    //user price
    cout<<"Enter price: ";
    cin>>price;
    
    //discount %
    int discount;
    cout<<"discount percentage: ";
    cin>>discount;
    
    //After discount value
    int afterdiscount = price - (price*discount/100);
   
    cout<<"After discount price is: "<<afterdiscount;


 return 0;    
}