#include<iostream> 
using namespace std; 
int len = 5; 
int salaries[5] = {500000,1200000,900000,450000,250000}; 
int findMaxSalary(){ 
int max_sal = salaries[0]; 
for(int i = 1;i < len;i++){ 
if(max_sal < salaries[i]){ 
max_sal = salaries[i]; 
} 
} 
return max_sal; 
} 
int getTotalSalary(){ 
int total = 0; 
for(int i = 0;i < len;i++){ 
total += salaries[i]; 
} 
return total; 
} 
bool isOdd(int num){
    if(num%2)
    {
        return true;
    }
    else{
        return false;
    }
    
}
int main(){ 
cout<<"\nMaximum Salary is "<<findMaxSalary(); 
cout<<"\n\nTotal Salary is "<<getTotalSalary(); 

if(isOdd(100)){
    cout<<"\n100 is odd";
}
else{
    cout<<"\n99 is even";
}
return 0; 
}

