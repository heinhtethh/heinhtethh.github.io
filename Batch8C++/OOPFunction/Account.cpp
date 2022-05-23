#include<iostream>
using namespace std;

class Account{
    //Data
    public:
        string account_holder;
        string account_no;
        int balance;
    //Methods  
    void createAccount(string holder,string accNo){
        account_holder = holder;
        account_no = accNo;
        balance = 1000;
    }
    
     void showData(){
        cout<<"\n______Current Info______\n";
        cout<<"\nHolder Name : "<<account_holder;
        cout<<"\nAccount No : "<<account_no;
        cout<<"\nCurrent Balance : "<<balance<<" ks.";
    }
   
    void deposit(int depositAmt){
        balance = balance + depositAmt;
    }
    bool withdraw(int withdrawAmt){
        if(withdrawAmt <= balance){
            balance = balance - withdrawAmt;
            return true;
        }
        else{
           
            return false;
          }
        }
    
};

int main(){

    /*create Account object */
    Account acc1,acc2,acc3;

    return 0;
}