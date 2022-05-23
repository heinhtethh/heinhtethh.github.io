#include<iostream>
using namespace std;
int main(){

string brands[4] = {"Samsung","iPhone","Vivo","Oppo"};
string search_name;
int index = -1;

cout<<"Enter brand to search : ";
//getline(cin,search_name);
cin>>search_name;

for(int i = 0;i < 4; i++){
if(search_name == brands[i]){
    cout<<"It's exist.";
index = i;
break;
}
}
if(index == -1){
cout<<search_name<<" does not exist.";
}
else{
cout<<search_name<<" \nis found at position No. "<<index;
}
}
