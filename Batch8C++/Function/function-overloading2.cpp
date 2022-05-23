#include<iostream>
using namespace std;
int max(int n1,int n2){
     return (n1 > n2) ? n1 : n2;
}
int max(int n1,int n2,int n3){
        int m_val = n1;
    if(m_val < n2)
         m_val = n2;
    if(m_val < n3)
         m_val = n3;
      
      return m_val;
}
int main(){
int a,b,c;
cout<<"Enter two numbers : ";
cin>>a>>b;
cout<<"\nMaximum value is "<<max(a,b);

cout<<"\n\nEnter three numbers : ";
cin>>a>>b>>c;

cout<<"\nMaximum value is "<<max(a,b,c);
cout<<endl;
return 0;
}
