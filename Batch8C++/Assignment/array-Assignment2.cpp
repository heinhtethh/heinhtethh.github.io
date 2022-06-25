#include<iostream>
using namespace std;
int main(){
    int barcode[4];
    string itemname[4];
    float itemprice[4];

    //Data Accept from Item
    for (int i = 0; i < 4; i++)
    {
        cout<<"\nEnter Data of Items "<<(i+1)<<":\n";

        cout<<"Enter barcode: ";
        cin>>barcode[i];

        cin.ignore();

        cout<<"Enter Item Name: ";
        getline(cin,itemname[i]);

        cout<<"Enter price of Item: ";
        cin>>itemprice[i];
        
    }

    //Display all items information
    cout<<"\n\n______________________All Items____________________\n";
    cout<<"Barcode\t Item-name\t Item-prices\n";
    //cout<<"__________________________________________\n";
    for (int i = 0; i < 4; i++)
    {
        cout<<barcode[i]<<"\t"<<itemname[i]<<"\t"<<itemprice[i];
        cout<<"\n";
   
    }
    //To find priceitem greater than 300
    //int search_price;
    //cout<<"Enter add your price of item";
    //cin>>search_price;

    //int result = -1;
    
    cout<<"\n\n________This price are greater than 300_________\n";
    
    for (int i = 0; i < 4; i++)
    {
        if ( itemprice[i] > 300)     
         {
            cout<<itemname[i]<<"\t"<<itemprice[i];
        }
       cout<<"\n";
        
    }
    int search_barcode;
    cout<<"Enter barcode: ";
    cin>>search_barcode;

    int result = -1;

    for (int i = 0; i < 4; i++)
    {
        if (search_barcode == barcode[i])
        {
           result = -1;
           break;
        }
        if(result == -1){
            cout<<"There are no item in this collective item with barcode "<<search_barcode;
        }
        else
        {
             cout<<"\nBarcode: "<<search_barcode;
            cout<<"\nItemname: "<<itemname[result];
            cout<<"\nItemprice: "<<itemprice[result];
        }
           
    }
    
    return 0;

}
    