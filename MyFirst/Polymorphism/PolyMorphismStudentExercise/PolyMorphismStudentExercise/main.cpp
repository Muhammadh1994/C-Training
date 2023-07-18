//
//  main.cpp
//  PolyMorphismStudentExercise
//
//  Created by Abdullah Juhaif on 7/15/23.
//

#include <iostream>
#include <math.h>
using namespace::std;
class shape{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle:public shape{
private:
    int l;
    int b;
public:
    Rectangle(int l=0,int b=0);
    void setParam(int l,int b);
    float area();
    float perimeter();
};
class circle:public shape{
private:
    int r;
public:
    circle(int r=0);
    void setParam(int r);
    float area();
    float perimeter();
};
Rectangle::Rectangle(int l,int b){
    setParam(l,b);
}
circle::circle(int r){
    setParam(r);
}
void Rectangle::setParam(int l, int b){
    this->l=l;
    this->b=b;
}
void circle::setParam(int r){
    this->r=r;
}
float Rectangle::area(){
    return l*b;
}
float circle::area(){
    return M_PI*pow(r, 2);
}
float Rectangle::perimeter(){
    return 2*(l+b);
}
float circle::perimeter(){
    return 2*M_PI*r;
}
int main(int argc, const char * argv[]) {
    // To achieve polymorphism we need to use base class pointer and derived class object
    shape *s;
    s=new Rectangle(10,5);
    cout<<"The area is "<<s->area()<<endl;
    cout<<"The perimeter is "<<s->perimeter()<<endl;
    s=new circle(10);
    cout<<"The area is "<<s->area()<<endl;
    cout<<"The perimeter is "<<s->perimeter()<<endl;
}
