#include<iostream>
using namespace std;
int main(){

int mark[4];
//user input
for(int i = 0;i < 4;++i){
cout<<"Enter mark "<<(i+1)<<": ";
cin>>mark[i];
}
//user output
int j = 0;
cout<<"\n----------All Marks-----------\n";
while(j < 4){
cout<<" mark["<<j<<"] = "<< mark[j];
j++;
}

j = 0;
int total = 0;
do{
//total += mark[j];
total = total + mark[j];
j++;
}while(j < 4);

cout<<"\nTotal Mark is "<<total;
cout<<"\nAverage Mark is "<<(float)total/4;
}
