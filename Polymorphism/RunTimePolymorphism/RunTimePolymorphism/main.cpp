//
//  main.cpp
//  RunTimePolymorphism
//
//  Created by Abdullah Juhaif on 7/14/23.
// We saw the use case of virtual classes, Polymorphism is achieved when a base class pointer points to a derived class object when the functions in the base class are overriden by the derived class, thus the funtions in the base class are not called

#include <iostream>
using namespace::std;
class base{
public:
    // As we can see the below functions are never called the definition in them are of no use hence we can remove it the example is shown in disp1(),
    // To make sure disp1() is defined in the derived class we need to assign it to 0
    virtual void disp(){
        cout<<"This will never get called in a base class pointer";
    }
    virtual void disp1()=0;
};

class derived:public base{
public:
    void disp(){
        cout<<"The disp() in derived"<<endl;
    }
    void disp1(){
        cout<<"The disp1 in derived"<<endl;
    }
};
class derived1:public base{
    void disp(){
        cout<<"The disp() in derived1"<<endl;
    }
    void disp1(){
        cout<<"The disp1 in derived1"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    base *b;
    b=new derived();
    b->disp();
    b->disp1();
    b=new derived1();
    b->disp();
    b->disp1();
    
}
