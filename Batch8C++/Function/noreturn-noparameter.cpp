#include<iostream> 
using namespace std; 
string cities[3]; 
void initializeData(){ 
for(int i = 0; i < 3; i++){ 
cout<<"Enter city name : "; 
getline(cin,cities[i]); 
} 
} 
void showData(){ 
cout<<"\n________All Cities_______\n\n"; 
for(int i = 0;i < 3;i++) 
cout<<cities[i]<<"\n"; 
} 
int main(){ 
initializeData(); 
showData(); 
return 0; 
}

