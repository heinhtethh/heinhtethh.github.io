#include<iostream> 
using namespace std;



string brands[5]; 
int index = 0; 
void addBrand(string brand){ 
brands[index] = brand; 
index++; 
} 
void showData(){ 
for(int i = 0;i < 5;i++){ 
cout<<brands[i]<<endl; 
} 
} 
int main(){ 
addBrand("iPhone"); 
addBrand("Samsung"); 
addBrand("Vivo"); 
addBrand("Oppo"); 
addBrand("Mi"); 
cout<<"\n______All Brand_______\n\n"; 
showData(); 

return 0;
}



