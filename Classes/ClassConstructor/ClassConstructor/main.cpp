//
//  main.cpp
//  ClassConstructor
//
//  Created by Abdullah Juhaif on 7/6/23.
//

#include <iostream>
using namespace::std;
// Constructor are used to initialized the data in a class during initialization we can use the Actuators and the Mutators for that purpose
class Rectangle{
private:
    int l;
    int b;
public:
    Rectangle(){
        l =0;
        b =0;
    }
    //Constructor With Parameters
    Rectangle(int l, int b){
        //Lets use an Actuator to initialize these variables
        setparameters(l,b);
    }
    //copy Constructor, copies the value of another object if you have a pointer in a call use a deep copy constructor instead of directly doing object.datastructure create a new vaue
    Rectangle(Rectangle &rect){
        l=rect.l;
        b=rect.b;
    }
    void setparameters(int l, int b){
        this->l=l;
        this->b=b;
    }
    void displaypara(){
        cout<<"Length of the rectangle is :"<<l<<endl;
        cout<<"Breadth of the rectangle is :"<<b<<endl;
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Rectangle r(10,15);
    Rectangle r1(r);
    Rectangle *ptr;
    //Lets assign a pointer to the object and see the outputs
    ptr=&r;
    cout<<"The pointer element:"<<ptr<<endl;
    ptr->displaypara();
    ptr=&r1;
    cout<<"The pointer element:"<<ptr<<endl;
    ptr->displaypara();
    
}
