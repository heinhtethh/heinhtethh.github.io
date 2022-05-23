#include<iostream>
using namespace std;
int main(){

    int mark[5] = {100,50,60,50,90};

    int a = mark[0];

    cout<<a;
    cout<<"\n"<<mark[1];
    cout<<"\n"<<mark[2];
    cout<<"\n"<<mark[3];
    cout<<"\n"<<mark[4];

    mark[4] = 100;
    cout<<"\n mark[4]: "<<mark[4];

    int total = mark[0] + mark[1] + mark[2] + mark[3] + mark[4];

    cout<<"\nTotal: "<<total;
    return 0;
}