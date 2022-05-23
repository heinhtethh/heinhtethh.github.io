#include<iostream>
using namespace std;
int main(){
 
    int i = 0;
    while (i < 8)
    {
        i++;
        if(i == 4){
           //break;// exist loop and execute next statement
           continue; // skip current iteration and go to next itration
        }
        cout<<"Statement"<<i<<"\n";
    }
    cout<<"\n.....Program End......";
    
    return 0;
}