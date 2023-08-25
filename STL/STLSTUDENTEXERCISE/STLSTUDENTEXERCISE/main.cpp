//
//  main.cpp
//  STLSTUDENTEXERCISE
//
//  Created by Abdullah Juhaif on 8/5/23.
//

#include <iostream>
//We are asked tow rite and read from a file for which we need this library
#include<fstream>
// We need vectors as the ask is to use it
#include<vector>
// First Lets create an Item class as we are supposed to read and write an string,int,int which will becomde tedious to read for the client hence we create our own data Type
using namespace::std;
class Item{
private:
    string Name;
    int Price,Qty;
public:
    Item(string Name="0",int Price=0,int Qty=0);
    friend ostream &operator<<(ostream &o,Item &i);
    friend ofstream &operator<<(ofstream &o,Item &i);
    friend ifstream &operator>>(ifstream &ifs, Item &i);
};
int main(int argc, const char * argv[]) {
    // insert code here...
    int n,p,q;
    string name;
    ofstream ofs("STL_Projct.TXT");
    cout<<"Enter the Number of Items";
    cin>>n;
    // If we want to handle bigger elements we can use pointers
    vector<Item> list;
    for (int i=0;i<n;i++){
        cout<<"Enter the Name, Price and qty of the product"<<endl;
        cin.ignore();
        getline(cin,name);
        cin>>p>>q;
        list.push_back(Item(name,p,q));
    }
    vector<Item>::iterator itr;
    for(itr=list.begin();itr!=list.end();itr++){
        ofs<<*itr;
    }
    Item s;
    ifstream ifs;
    ifs.open("STL_Projct.TXT");
    for (int i=0;i<n;i++){
        ifs>>s;
        cout<<"Items in order "<<i<<endl;
        cout<<s;
    }
}
// Custructor to set the values
Item::Item(string Name,int Price,int Qty){
    this->Name=Name;
    this->Price=Price;
    this->Qty=Qty;
}
//Ostream Operator to dispplay the variables
ostream &operator<<(ostream &o,Item &i){
    o<<"Name: "<<i.Name<<endl;
    o<<"Price: "<<i.Price<<endl;
    o<<"Quantity: "<<i.Qty<<endl;
    return o;
}
ofstream &operator<<(ofstream &o,Item &i){
    o<<i.Name<<endl;
    o<<i.Price<<endl;
    o<<i.Qty<<endl;
    return o;
}
ifstream &operator>>(ifstream &ifs, Item &i){
    getline(ifs,i.Name);
    ifs>>i.Price>>i.Qty;
    ifs.ignore();
    return ifs;
}
