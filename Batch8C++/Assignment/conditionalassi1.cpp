#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your non zero number: ";
    cin>>num;

    if(num > 0){
        cout<<"This number is positive number.";
    }
    else{
        cout<<"This number is negative number.";
    }
    return 0;
}