#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Please input your age: ";
    cin>>age;
    
    if (age < 60)
    {
        cout<<"Your are pretty young!\n";
    }
    else if(age == 60)
    {
        cout<<"Your are old!\n";

    }
    else{
        cout<<"Your are really old.\n";
    }
    
    return 0;
}