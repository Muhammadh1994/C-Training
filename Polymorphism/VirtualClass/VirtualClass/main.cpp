//
//  main.cpp
//  VirtualClass
//
//  Created by Abdullah Juhaif on 7/14/23.
// When a function in overrided in the derived class if we use a Base class pointer on that derived class object, then we know that the function in the base class will be called which is incorrect in certain sitations thus we user virtual key word on funtions in base class which are overriden Now the base class pointer of the derived class will call the function in the derived class. For further understanding check the base class pointer and derived class object

#include <iostream>
using namespace::std;
class base{
public:
    void disp(){
        cout<<"disp() Funtion in base class which does not have a virtual fuction"<<endl;
    }
    virtual void disp1(){
        cout<<"disp1() Funtion in base class which does has a virtual fuction"<<endl;
    }
};
class derived:public base{
public:
    void disp(){
        cout<<"disp() Funtion in derived class which does not have a virtual fuction"<<endl;
    }
    void disp1(){
        cout<<"disp1() Funtion in derived class which does has a virtual fuction"<<endl;
    }
    void disp2(){
        cout<<"disp2() Funtion in derived class which does has a virtual fuction"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    // Base ckass pointer Derived class object
    base *b;
    b=new derived();
    b->disp();
    b->disp1();
    //This is not possible as a base class pointer can only access the function declared in the base class and disp2 is declared in the derived class
    //b->disp2();
    // Normal object call this is not polymorphism
    base c;
    c.disp();
    c.disp1();
    derived d;
    d.disp();
    d.disp1();
    d.disp2();
    return 0;
}
