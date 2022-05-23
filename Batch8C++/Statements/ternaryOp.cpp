#include <iostream>
using namespace std;
int main(){
    int num; 
    string result;
    cout<<"Enter a number";
    cin>>num;

    result = (num%2 == 1) ? "Odd" : "Even";
    cout<<num<< " is "<< result;

    
//ternary 2

    int time;
    cout<<"Enter time: ";
    cin>>time;

    string output = ( time < 10) ? "Good Morning" : ( time < 20 ? "Good Day" : "Good Evening");
    
    cout<<output;
    
    
    return 0;



}