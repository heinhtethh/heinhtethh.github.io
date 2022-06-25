#include<iostream>
using namespace std;
int main(){

int row = 2;
int col = 3;
int num[row][col];

// assign value to 2D array
for(int i = 0;i < row;i++){     //outer loop for row
      for(int j = 0;j < col;j++){    //inner loop for column
        cout<<"Enter any number : ";
        cin>>num[i][j];
        cout<<endl;
       }
    }

cout<<"\n_______All Elements________\n\n";

int total = 0;
int count_val = 0;

for(int i = 0; i < row; i++){
      for(int j = 0;j < col;j++){
        cout<<num[i][j]<<"\t";
        total += num[i][j];
        count_val++;
}
cout<<"\n";
}
cout<<"\nNumber of elements : "<<count_val;
cout<<"\nTotal value : "<<total;
cout<<"\nAverage value : "<<((float)total/count_val);

return 0;
}
