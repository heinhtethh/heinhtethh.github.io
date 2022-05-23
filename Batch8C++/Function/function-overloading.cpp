#include<iostream>
using namespace std;
bool equals(int arg1,int arg2){
return (arg1 == arg2) ? true : false;
}
bool equals(double arg1,double arg2){
return (arg1 == arg2) ? true : false;
}
bool equals(char arg1,char arg2){
return (arg1 == arg2) ? true : false;
}
bool equals(string arg1,string arg2){
return (arg1 == arg2) ? true : false;
}
int main(){
cout<<"9 is equal to 9 : "<<equals(9,9);
cout<<"\n\n3.2 is equal to 9.1 : "<<equals(3.2,9.1);
cout<<"\n\n'Y' is equal to 'W' : "<<equals('Y','W');
cout<<"\n\n\"JK\" is equal to \"JK\" : "<<equals("JK","JK");
cout<<endl;
return 0;


}