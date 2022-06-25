#include <iostream>
using namespace std;
int main(){

    int totalseconds;
    cout<<"Enter Total Second:" ;
    cin>>totalseconds;

    //hour
    int hr = totalseconds/3600;
    //min
    int min = (totalseconds%3600)/60;
    //second
    int sec = (totalseconds%3600)%60;

    //output
    cout<<"Hour: "<<hr;
    cout<<"Minutes: "<<min;
    cout<<"Second: "<<sec;


    return 0;
}
