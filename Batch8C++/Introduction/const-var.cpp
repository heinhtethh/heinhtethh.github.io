#include<iostream>
using namespace std;
int main(){

    const int WIDTH = 10;
    const int LENGTH = 5;
    const string NAME = "Rectangle";
    int area;

    area = WIDTH * LENGTH;
    cout<<"Area: "<<area;
    cout<<"\nvalue of length: "<< LENGTH;
    cout<<"\nvalue of width:  "<< WIDTH;
    cout<<"\nvalue of name: "<< NAME;
    return 0;


}