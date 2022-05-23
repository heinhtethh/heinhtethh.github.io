#include<iostream>
using namespace std;
int start_num = 0; 
int main(){
     
     int start_num, end_num;
     int total = 0;
     int count = 0;
     float avg;

     cout<<"Enter your start number: ";
     cin>>start_num;

     cout<<"Enter your end nuimber: ";
     cin>>end_num;

     while(start_num <= end_num)
     {
         total += start_num;
         count += 1;
         start_num++;

     }
     avg = (float)total/count;

     cout<<"Total value is "<< total;
     cout<<"\nCount value is "<< count;
     cout<<"\nAverage value is "<< avg;







    return 0;
}