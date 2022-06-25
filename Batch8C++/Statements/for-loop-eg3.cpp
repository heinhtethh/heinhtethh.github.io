#include<iostream>
using namespace std;
int main(){
     
    int start_num,end_num;

    int total,count;

    total = 0; 
    count = 0;

    cout<<"Enter start number: ";
    cin>>start_num;

    cout<<"Enter end number: ";
    cin>>end_num;

    for(int i = start_num; i <= end_num; i++){
        total = total + i;
        count++;
    }

    cout<<"Total: "<<total;
    cout<<"\nCount: "<<count;
    cout<<"\nAverage: "<<total/count;



    return 0;
}