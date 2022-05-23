#include<iostream>
#include<cctype>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
cout<<"\n_______Functions of cctype library____\n\n";
cout<<"Is alpha('9') : "<<isalpha('9')<<endl;
cout<<"Is alpha('A') : "<<isalpha('A')<<endl;
cout<<"Is digit('9') : "<<isdigit('9')<<endl;
cout<<"lower case of 'A' : "<<(char)tolower('A')<<endl;
cout<<"\n_______Functions of cMath library____\n\n";

cout<<"3 power 5 is "<<pow(3,5)<<endl; //base=3,power=5
cout<<"Square root of 36 is "<<sqrt(36)<<endl;
cout<<"Value of sin(30) is "<<sin(30)<<endl;
cout<<"Value of log(10) is "<<log(10)<<"\n\n";
cout<<"\n_______Functions of iomanip library____\n\n";
cout<<"Spring"<<setw(20)<<"Day"<<endl;
cout<<"Love"<<setw(27)<<"Yourself"<<endl;

return 0;
}