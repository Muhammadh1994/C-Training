//
//  main.cpp
//  InheritanceBasics
//
//  Created by Abdullah Juhaif on 7/10/23.
//
#include <iostream>
using namespace::std;
class Rectangle{
private:
    int l;
    int b;
public:
    Rectangle(int l=0,int b=0);
    Rectangle(Rectangle &r);
    void setparam(int l,int b);
    int getlenght();
    int getbreadth();
    void disparam();
    int area();
};
Rectangle::Rectangle(int l,int b){
    setparam(l,b);
    cout<<"base clase lentgh"<<l<<"\nBase Class breadth:"<<b<<endl;
}
Rectangle::Rectangle(Rectangle &r){
    l=r.l;
    b=r.b;
}
void Rectangle::setparam(int l, int b){
    this->l=l;
    this->b=b;
}
void Rectangle::disparam(){
    cout<<"The Length of the rectangle is: "<<l<<endl;
    cout<<"The breadth of the rectangle is: "<<b<<endl;
}
int Rectangle::area(){
    return l*b;
}
int Rectangle::getlenght(){
    return l;
}
int Rectangle::getbreadth(){
    return b;
}
//Inherit the Rectangle class though we are inheriting the class whatever is in private is still not accessible and can only be access directly we can only access it through mutators like before
class Cuboid: public Rectangle{
private:
    int h;
public:
    Cuboid(int l=0,int b=0,int h=0);
    Cuboid(Cuboid &C);
    void setHeight(int h);
    int getHeight();
    int volume();
    friend ostream & operator<<(ostream &o, Cuboid &C);
};
// by default the parent cunstructor will be called in order to pass the value of l and b we have to write it the beklow way else the parent cunstructor will be called with values 0,0. If we give it the following way we do not have to call setparam(l,b) in cuboid as it becomes redundant. If you want to see the chnage remove ':Rectangle(l,b)' inthe below line and see the output
Cuboid::Cuboid(int l,int b,int h):Rectangle(l,b){
    // the below line is redundant as we are calling in the parent class cunstructor and passing the values using :Rectangle(l,b)
    setparam(l, b);
    setHeight(h);
}
// the above can be used for copy cunstructors as well
Cuboid::Cuboid(Cuboid &C):Rectangle(C.getlenght(),C.getbreadth()){
    // the below line is redundant as we are calling in the parent class cunstructor and passing the values using :Rectangle(C.getlenght(),C.getbreadth())
    setparam(C.getlenght(),C.getbreadth());
    this->h=C.h;
}
void Cuboid::setHeight(int h){
    this->h=h;
}
int Cuboid::getHeight(){
    return h;
}
int Cuboid::volume(){
    return getlenght()*getbreadth()*h;
}
ostream & operator<<(ostream &o, Cuboid &C){
    o<<"Length of the Cuboid: "<<C.getlenght()<<endl;
    o<<"Length of the Cuboid: "<<C.getbreadth()<<endl;
    o<<"Length of the Cuboid: "<<C.h;
    return o;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Cuboid c1(10,7,5);
    Cuboid c2(c1);
    Cuboid c3(0,0,5);
    cout<<c3<<endl;
    c3.setparam(10, 7);
    cout<<"After Modification: "<<endl;
    cout<<c2<<endl;
    cout<<"The Volume of C1 :"<<c1.volume()<<endl;
    cout<<c2<<endl;
    cout<<"The Volume of C2 :"<<c2.volume()<<endl;
    cout<<c3<<endl;
    cout<<"The Volume of C3 :"<<c3.volume()<<endl;
    return 0;
}
