#include<iostream> 
using namespace std; 
int addNumber(int a, int b = 7, int c = 19){ 
return (a + b + c); 
} 
void show(){
   cout<<"Name is unknown";
}
void show(string name){
     cout<<"Name is "<<name;
}
int main(){

int n1,n2,n3; 
cout<<"Enter values for n1, n2, n3 : "; 

cin>>n1>>n2>>n3; 

cout<<"\nCall with 1 arg : "<<addNumber(n1); 
cout<<"\nCall with 2 arg : "<<addNumber(n1,n2); 
cout<<"\nCall with 3 arg : "<<addNumber(n1,n2,n3); 
return 0; 
}


