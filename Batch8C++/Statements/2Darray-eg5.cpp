#include<iostream>
using namespace std;
int main(){

int row = 2;
int col = 3;
float prices[row][col] = {{1200.9,340,600.2},{1100,4900,500.5}};

cout<<"\n_______All Elements________\n\n";
for(int i = 0; i < row; i++){
       for(int j = 0;j < col;j++){
           cout<<prices[i][j]<<"\t";
        }
           cout<<"\n";
    }
// find the maximum price
float max_price = prices[0][0];
for(int i = 0;i < row;i++){
     for(int j = 0;j < col;j++){
          if(max_price < prices[i][j]){
                max_price = prices[i][j];
            }
        }
    }
    cout<<"\nMaximum price is "<<max_price;

return 0;

}
