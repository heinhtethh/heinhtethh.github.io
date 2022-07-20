#include <iostream>:
using namespace std;
int main(){
    int i,j, a=0,b=0;

    for( i=2; i<100; i++){
        for( j=2; j<=i; j++){
            if(i%j==0){
               break;
            }
            else if (i==j+1)
            {
               
               cout<<i<<endl;
            }
            
        }a=0;
        
    }


return 0;
}