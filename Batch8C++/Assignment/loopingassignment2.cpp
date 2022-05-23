#include<iostream>
using namespace std;
int main(){
  
  //declare var
  int num;
  int positive = 0, negative = 0, zero = 0;

	char choice;

	do
	{
		cout<<"Enter number: ";
		cin>>num;

		if(num>0)
			positive++;

		else if(num<0)
			negative++;

		else
			zero++;

		cout<<"Do you want to Continue(y/n)? ";
		cin>>choice;

	}while(choice=='y' || choice=='Y');


	cout<<"Positive Number :"<<positive<<"\nNegative Number :"<<negative<<"\nZero Number :"<<zero;


	return 0;
}

