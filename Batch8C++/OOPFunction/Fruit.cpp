
#include<iostream>
using namespace std;


class Fruit{
public:
   string name;
   int price;
void setData(string na,int price){
   name = na;
   this->price = price;
}

void showData(){
cout<<"\nName : "<<name;
cout<<"\nPrice : "<<price;
cout<<endl;
}
};

int main(){

/*Create fruit object */
//Way 1
//Fruit fruit1;
//Fruit fruit2,fruit3;

//Way 2
Fruit fruit2 = Fruit();
     
    /*Create fruit object */
Fruit fruit1;
Fruit fruit2;
fruit1.name = "Orange";
fruit1.price = 500;
fruit1.showData();

cout<<"\n_____Another Fruit_____\n";

fruit2.setData("Banana",1000);
fruit2.showData(); 
    return 0;
}