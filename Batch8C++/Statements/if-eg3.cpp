#include <iostream>
using namespace std;
int main(){
    //declare var
    int num1,num2,num3;
    // input
    /*cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter number 3: ";
    cin>>num3;*/
    //calculate

    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    int max_num = num1;
    if (max_num < num2)
    {
        max_num = num2;
    }
    if (max_num < num3)
    {
        max_num = num3;
    }
    
    
    cout<<"Maximun number:  "<<max_num;
    


    return 0;
}