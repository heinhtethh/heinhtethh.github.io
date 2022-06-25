#include<iostream> 
using namespace std; 

int findMax(int,int); 
int main(){ 
int num1,num2; 
cout<<"Enter two numbers : "; 
cin>>num1>>num2;



cout<<"Max number : "<<findMax(num1,num2); 
} 
int findMax(int a,int b){ 
return (a <b ) ? b : a; 
}

