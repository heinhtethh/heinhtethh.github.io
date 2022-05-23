#include<iostream>
using namespace std;
int main(){
    int i;
    for( i = 1; i < 6; i++){
        if( i % 2 == 0){
            cout<<"This number is even number.";
        }
        else{
            cout<<"This number is odd number.";
        }
        
    }
    return 0;
}