#include <iostream>
using namespace std;

int main(){

    int totalday;
    cout<<"Enter total day: ";
    cin>>totalday;

    //years
    int years = totalday/365;
    //months
    int months = (totalday%365) / 30;
    //days
    int days =  (totalday%365) % 24;

    cout<<"\nYears is: "<<years;
    cout<<"\nMonths is: "<<months;
    cout<<"\nDays is: "<<days;

    return 0;
}