//data_type array_name[row_size][column_size] = { {comma_separated_value_list} };

#include<iostream>
using namespace std;
int main(){
//1
int num1[2][3] = {{10,54,30},{90,79,89}}; // ok
//2
int num2[2][3] = {{10,54,30}};// ok
//3
int num3[2][3] = {{10,54},{90,79}};// ok
//4
int num4[2][3] = {{10,54},{90}};// ok
//5
int num5[][3] = {{10,54},{90},{79,89,100}};// ok ( 3 rows, 3 cols)
//6
int num6[2][3] = {};// ok
//7
int num7[][3] = {10,54,30,90};// ok
//8
int num8[2][3] = {10,54,30,90,79,89}; // ok
//9
int num9[2][] = {10,54,30,90,79,89};// error - col size must be defined
//10
int num10[][] = {10,54,30,90,79,89};// error - col size must be defined


return 0;
}
