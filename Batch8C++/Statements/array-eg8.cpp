#include<iostream>
using namespace std;
int main(){

int len = 4;
int numbers[len] = {13, 11, 19, 2};

cout<<"____Elements in Array_____\n\n";

for(int i = 0; i < len; ++i){
cout<<numbers[i]<<"\t";
}

int largest = numbers[0];
for(int i = 1; i < len; i++){
if(largest < numbers[i]){
largest = numbers[i];
}
}
cout<<"\n\nThe largest element is "<<largest;
}