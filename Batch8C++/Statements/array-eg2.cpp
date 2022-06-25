#include<iostream>
using namespace std;
int main(){
    int mark1[] = {100,50,90};
    int mark2[] = {};
    int mark3[] = {100,50,90,70,80,100};

    cout<<"size of int: "<<sizeof(int);
    cout<<"\nsize of mark1: "<<sizeof(mark1);
    cout<<"\nlength of mark1: "<<sizeof(mark1)/sizeof(int);
    cout<<"\nlength of mark2: "<<sizeof(mark2)/sizeof(int);
    cout<<"\nlength of mark3: "<<sizeof(mark3)/sizeof(int);


    return 0;
}