
#include <iostream>
using namespace std;
int main (){
    int rno;
    int name;
    string city;
    int age;
    float mark;
    char grade;
 
    cout<<"----User Input----\n\n";
    cout<<"Enter rno: ";
    cin>>rno; // rno = 2
    cin.ignore();//
    cout<<"Enter name: ";
    //cin>>name; //name = aung aung
    getline(cin,name);
    cout<<"Enter city: ";
    getline(cin,city);
    cout<<"Enter mark: ";
    cin>>mark;
    cout<<"Enter grade: ";
    cin>>grade;

    cout<<"\n-----Your Profile-----\n";

    cout<<"Roll number: "<<rno;
    cout<<"\nYour name: "<<name;
    cout<<"\nYour city: "<<city;
    cout<<"\nYour mark: "<<mark;
    cout<<"\nYour grade: "<<grade;
    






return 0;
}
