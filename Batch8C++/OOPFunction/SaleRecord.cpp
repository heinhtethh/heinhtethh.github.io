#include<iostream>
using namespace std;

class SaleRecord{
    public:
        string itemName;
        double unitPrice;
        int saleQty;
    void addSaleRecord(string item,double price,int qty){
        this->itemName = item;
        this->unitPrice = price;
        this->saleQty = qty;
    }
    double getSubTotal(){
        return (unitPrice * saleQty);
    }
    void displayInfo(){
        cout<<"\n";
        cout<<itemName<<"\t";
        cout<<unitPrice<<" ks.\t";
        cout<<saleQty<<"\t";
        cout<<getSubTotal()<<" ks.";
        cout<<"\n";
    }
};
int main(){

    /*create Account object */
    SaleRecord sale1,sale2;

    return 0;
}
