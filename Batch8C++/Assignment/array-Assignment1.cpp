#include <iostream>
using namespace std;

int main(){
int len [5]; 

//Accept numbers from users 
for (int i = 0; i < 5; i++)
{
    cout<<"Enter number "<<(i+1)<<": ";
    cin>>len[i];
}

//output numbers from users
cout<<"\n------------All numbers------------\n";
int j = 0;
for (int j = 0; j < 5; j++)
{
    cout<<len[j]<<"\t";
}

//Display output divisible by 3
for (int j = 0; j < 5; j++)
{
    if (len[j]%3==0)
    {
      cout<<"\n\nDisplay output divisible by 3: "<<len[j];
    }
}



return 0;
}