#include<iostream> 
using namespace std;
void checklogin(){ 

string email; 
string password;

//input :

input: cout<<"Enter email (***@gmail.com) : "; 
cin>>email; 
cout<<"Enter password : "; 
cin>>password; 
if(email == "jk@gmail.com" && password == "12345678"){ 
cout<<"\nLogin Success........"; 
} 
else{ 
int num; 
cout<<"\nemail and password do not match!\n"; 
cout<<"\nIf you want to try again, press '1'... : "; 
cin>>num; 
if(num == 1) 
cin.ignore();
goto input; 
} 
} 
int main(){ 
cout<<"\n_____Before Invoking Function________\n\n"; 
checklogin(); 
cout<<"\n\n_____After Invoking Function________\n"; 
return 0;
}




