#include <iostream>
using namespace std;
int main(){

    string uName;
    string password;

    cout<<"Enter your name: ";
    cin>>uName;

    cout<<"Enter your password: ";
    cin>>password;
    
    if(uName == "Corna" && password == "12345"){
       cout<<"Login Successes!";

    } else if(uName == "Corna" && password != "12345"){
        cout<<"Password is wrong!";
    }
      else if(uName != "Corna" && password == "12345"){
        cout<<"Username is incorrect!";
    }
    else {
        cout<<"Username and password are do not match";
    }



    return 0;
}