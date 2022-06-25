
#include<iostream> 
using namespace std; 

bool checklogin(string email,string pass){ 
return (email == "jk@gmail.com" && pass == "123") ? true : false; 
} 

int main(){ 
string email,password; 

input : cout<<"\nEnter email : "; 
cin>>email; 
cout<<"Enter password : "; 
cin>>password;

if(checklogin(email,password)){
cout<<"\n\nLogin success........\n"; 
} 
else{ 
char ch; 
cout<<"\n\nInvalid login..........\n"; 

cout<<"\nIf you want to try again, press '1' : \n"; 
cout<<"If you want to stop, press any character : "; 
cin>>ch; 

if(ch == '1') 
goto input; 
} 
return 0; 
}


