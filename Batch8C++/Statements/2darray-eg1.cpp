//array-name[row-index][col-index]
//Example - 1 - Initialize and display array elements
#include<iostream>
using namespace std;

int main(){

int num[2][3];
// assign value to 2D array
num[0][0] = 70;
num[0][1] = 90;
num[0][2] = 80;
num[1][0] = 78;
num[1][1] = 69;
num[1][2] = 78;

cout<<"_______All Elements________\n\n";
cout<<num[0][0]<<"\t";
cout<<num[0][1]<<"\t";
cout<<num[0][2]<<"\t";
cout<<"\n";
cout<<num[1][0]<<"\t";
cout<<num[1][1]<<"\t";
cout<<num[1][2]<<"\t";
cout<<"\n";

return 0;
}
