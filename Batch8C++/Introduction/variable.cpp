#include<iostream>
using namespace std;


int a = 100; //gobal variable

void display(){
    int a = 200; //local variable
    cout<<"Value of a inside fun: "<<a;
}
void displayAnother(int a){//parameter (local var)
    cout<<"value of a insde function parameter: "<<a;

}
int main(){
    
     cout<<"value of a: "<<a;
     cout<<"\n";
     display();
     cout<<"\n";
     displayAnother(500);
     {

         cout<<"\na = "<<a;
         a = 5000;
         cout<<"\na ="<< a;
     }
     cout<<"\nThis is final statement";
    return 0;
}