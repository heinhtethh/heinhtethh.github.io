#include<iostream>
using namespace std;
int main(){
//1
int mark[5] = {90, 50, 53, 70, 80}; // ok
int mark[2] = {60};
cout<<mark[2];


//2
//int mark[5] = {}; // ok
//3
//int mark[5] = {90, 50, 53}; // ok
//4
//int mark[5] = {90, 50, 53, 70, 80, 100}; // you will get compilation-error


return 0;
}