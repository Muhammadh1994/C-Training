//
//  main.cpp
//  IOSTREAMS_STUDENTEXCERCISE
//
//  Created by Abdullah Juhaif on 7/25/23.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace::std;
class Item{
private:
    string name;
    int price;
    int quantity;
public:
    Item(string name="0",int price=0,int quantity=0);
    void setParam(string name,int price,int quantity);
    friend ofstream &operator<<(ofstream &o, Item &i);
    friend ifstream &operator>>(ifstream &o, Item &i);
    friend ostream &operator<<(ostream &o, Item &i);
};
int main(int argc, const char * argv[]) {
    int n;
    string name;
    int price;
    int quantity;
    ofstream ofs("Item.txt");
    cout<<"Enter the number Items: ";
    cin>>n;
    
    Item *list[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the name of the product: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the price of the product: ";
        cin>>price;
        cout<<"Enter the quantity of the product: ";
        cin>>quantity;
        list[i]=new Item(name,price,quantity);
    }
    // write to a file
    for(int i=0;i<n;i++){
        // Dereference the pointer for assigning value
        ofs<<*list[i];
    }
    // To read the file you need a type
    Item item;
    ifstream ifs("Item.txt");
    for(int i=0;i<n;i++){
        ifs>>item;
        cout<<item;
    }

}


Item::Item(string name,int price,int quantity){
    setParam(name, price, quantity);
}
void Item::setParam(string name, int price, int quantity){
    this->name=name;
    this->price=price;
    this->quantity=quantity;
}
ofstream &operator<<(ofstream &o, Item &i){
    o<<i.name<<endl;
    o<<i.price<<endl;
    o<<i.quantity<<endl;
    return o;
}
ifstream &operator>>(ifstream &o, Item &i){
    // As we are passing a string it is better to get line while recieving 
    getline(o,i.name);
    o>>i.price>>i.quantity;
    o.ignore();
    return o;
}

ostream &operator<<(ostream &o, Item &i){
    o<<"Name: "<<i.name<<endl<<"Price: "<<i.price<<endl<<"Quantity: "<<i.quantity<<endl;
    return o;
}
