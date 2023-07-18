//
//  main.cpp
//  ClassScopeResolution
//
//  Created by Abdullah Juhaif on 7/7/23.
//

#include <iostream>
using namespace::std;
// Generally when a function is called, it creates a seperate memory(non inline) for it rather than being as a part of the main funtion(inLine) but when a function which is in a class is accessed in a code it becomes the part of the main function(inline) like the funtions "called by reference" in order to make them non inline we define the funtion out of the class and use scope resolution "::" to access the funtion from the class
class Rectangle{
private:
    int l;
    int b;
public:
    Rectangle(int l=0,int b=0);
    Rectangle(Rectangle &r);
    void setparam(int l,int b);
    void disparam();
    int area();
};
Rectangle::Rectangle(int l,int b){
    setparam(l,b);
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
int main(int argc, const char * argv[]) {
    // insert code here...
    Rectangle r;
    Rectangle r1(10,5);
    Rectangle r2(r1);
    r.disparam();
    cout<<"Area of the rectangle is: "<<r.area()<<endl;
    r1.disparam();
    cout<<"Area of the rectangle is: "<<r1.area()<<endl;
    r2.disparam();
    cout<<"Area of the rectangle is: "<<r2.area()<<endl;
    return 0;
}
