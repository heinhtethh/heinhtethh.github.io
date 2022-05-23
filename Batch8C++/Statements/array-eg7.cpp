#include<iostream>
using namespace std;
int main(){

int len = 4;
int numbers[len] = {7, 16, 25, 20};

cout<<"_____Original Array is______ \n\n";
for(int i = 0;i < len;i++)
cout<<numbers[i]<<"\t";
cout<<"\n\n_____Reversed Array is______ \n\n";
for(int i = (len - 1);i >= 0; i--){
cout<<numbers[i]<<"\t";
}
}
