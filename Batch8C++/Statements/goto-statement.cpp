#include<iostream>
using namespace std;
int main(){
    string uname, upass;

    tryAgain : cout<<"\nEnter your name: ";
    cin>>uname;

    cout<<"\nEnter your password: ";
    cin>>upass;

    if( uname != "mit" || upass != "admin123"){
        goto tryAgain;
    }
    cout<<"\nLogin Success.";

    return 0;
}
