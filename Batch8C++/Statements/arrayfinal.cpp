#include<iostream>
using namespace std;
int main(){
     
    string names[2];
    int rol_num[2];
    int mark[2][3];

    //Accept from user input 
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter Data for student "<<(i + 1)<<":\n";
        cout<<"Name: ";
        getline(cin,names[i]);
        cout<<"Roll number: ";
        cin>>rol_num[i];
        //get marks
        for (int j = 0; j < 3; j++)
        {
            cout<<"Mark "<<(j+1)<<": ";
            cin>>mark[i][j];
        }
        cin.ignore();
        
    }

    //display output
    cout<<"\nrol_num \t Mark1 \t Mark2 \t Mark3\n";
    cout<<"-----------------------------------\n";
    //output mark;
    for (int i = 0; i < 2; i++)
    {
        cout<<rol_num[i]<<"\t"<<names[i]<<"\t";
        for (int j = 0;  j < 2; j++)
        {
            cout<<mark[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    //diplay rno with total mark
    cout<<"\n-------Student Info with total mark------\n";
    for (int i = 0; i < 2; i++)
    {
        cout<<"\nRno - "<<rol_num[i]<<"\n";
        //find total;
        int total = 0;
        for (int j = 0; j < 3; j++)
        {
            total += mark[i][j];
        }
        cout<<"Total Mark: "<<total;
        cout<<"\nAverage: "<<total/3.0;
    }
    
    //find student with rno
    int search_rno;
    cout<<"\nEnter roll number to search: ";
    cin>>search_rno;
    
    int result = -1;
    for (int i = 0; i < 2; i++)
    {
        if (search_rno = rol_num[i])
        {
            result = i;
            break;
        }
        
    }
    if (result == -1)
    
        cout<<"No student with Rno "<<search_rno;
        else{
            cout<<"\nRno: "<<search_rno; 
            cout<<"\nName: "<<names[result];
            cout<<"\nMarks1: "<<mark[result][0];
            cout<<"\nMarks2: "<<mark[result][1];
            cout<<"\nMarks3: "<<mark[result][2];
            
        }
    
    
    

    return 0;
}