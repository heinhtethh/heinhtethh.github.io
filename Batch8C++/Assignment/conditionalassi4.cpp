#include <iostream>
using namespace std;
int main(){

    //declare variable;
    int programmingMarks;
    int mathsMarks;
    int engMarks;
    
    //Accept marks from user;
    cout<<"Enter your progarmmingMarks: ";
    cin>>programmingMarks;

    cout<<"Enter your mathsMarks: ";
    cin>>mathsMarks;

    cout<<"Enter your engMarks: ";
    cin>>engMarks;

    //Finding maximun marks;
    int max_marks = programmingMarks;

    if(max_marks < mathsMarks){
       cout<<"Mathematics marks is the maximun marks.\n";
    } 
    else if(max_marks < engMarks){
        cout<<"English marks is the maixmun marks.\n";
    }
    else{
        cout<<"Programming marks is the maximun marks.\n";
    }
    
    //Finding minimun marks;
    int mini_marks = programmingMarks;

    if(mini_marks > mathsMarks){
       cout<<"Mathematics marks is the minimun marks.\n";
    }
    else if(mini_marks > engMarks){
       cout<<"English marks is the minimun marks.\n";
    }
    else{
       cout<<"Programming marks is the minimun marks.\n";
    }   
    
    //Finding the subjects that stand out;
    if(programmingMarks >= 80 ){
        
       cout<<"Programming marks is the subjects that stand out.\n  ";
    }
    if( mathsMarks >= 80){
       cout<<"Mathematics marks is the subjects that stand out.\n  ";
    }
    else if(  engMarks >= 80 ){
       cout<<"English marks is the subjects that stand out.\n  ";
    }
    else {
       cout<<"There are no prestigious subjects.\n";
    }
    
    //Starting to find average marks;
    int totalMarks;
    int sub1 = programmingMarks;
    int sub2 = mathsMarks;
    int sub3 = engMarks;

    totalMarks = sub1 + sub2 +sub3;
    cout<<"\nTotal marks of the subjects is "<<totalMarks;

    int avgMarks;
    avgMarks = (totalMarks/3);
    cout<<"\nAverage marks is "<<avgMarks;

    

    return 0;
}