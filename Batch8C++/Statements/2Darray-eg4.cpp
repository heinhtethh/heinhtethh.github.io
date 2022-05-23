#include<iostream>
using namespace std;
int main(){

int row = 2;
int col = 3;
int num[row][col];

// assign value to 2D array
for(int i = 0;i < row;i++){//outer loop for row
      for(int j = 0;j < col;j++){//inner loop for column
          cout<<"Enter any number : ";
          cin>>num[i][j];
          cout<<endl;
        }
    }
      
cout<<"\n_______All Elements________\n\n";
for(int i = 0; i < row; i++){
      for(int j = 0;j < col;j++){
           cout<<num[i][j]<<"\t";
        }
        cout<<"\n";
    }
cout<<"\n";//display sum of each column
for(int c = 0;c < col;c++){// loop for column
int total = 0;
for(int r = 0;r < row;r++){// loop for row
total += num[r][c];
}
cout<<"\nSum of "<<(c+1)<<" column is "<<total<<"\n";
}

return 0;
}
