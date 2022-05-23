#include<iostream> 
using namespace std; 
void changeValue(int val){ 
val = val + 20;



cout<<"\n\nValue inside function : "<<val; 
}


void changeAnother( int *val){
    
    *val = *val + 20;
    cout<<"\nValue inside function : "<<*val<<"\n";
}

int main(){ 
int num = 10; 
cout<<"Before calling function, num = "<<num; 
changeValue(num); 
cout<<"\n\nAfter calling function, num = "<<num; 

cout<<"\n---------Call by Ref--------";
int num1 = 100;
cout<<"Before calling function, num = "<<num1;
changeAnother(&num1);

cout<<"After calling function, num = "<<num1;

return 0;

}


