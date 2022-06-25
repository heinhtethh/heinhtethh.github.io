#include<iostream>
using namespace std;
int mian(){
    char ch;
    cout<<"If you enter 'q', program will terminate.";

    do
    {
       cout<<"\n Enter a character: ";
       cin>>ch;
       if (ch == 'q')
       {
           cout<<"Program terminate.....\n";
       }
       else if (ch >= '0' && ch <= '9')
       {
           cout<<"It is  digit.";
       }
       else{
           cout<<"It is not digit.";
       }
       
       
    } while (ch != 'q');
    
    return 0;
}