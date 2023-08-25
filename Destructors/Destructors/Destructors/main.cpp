//
//  main.cpp
//  Destructors
//
//  Created by Abdullah Juhaif on 7/20/23.
// As constructors are used to create data destructors are used to delete them. The data created in heap memory must deleted in the destructor explicitely and similar to the virtual functions when we aer using base

#include <iostream>
using namespace::std;
class  Base{
public:
    Base(){
        cout<<"created Base"<<endl;
    }
    ~Base(){
        cout<<"Destroyed base"<<endl;
    }
};
class Derived:public Base{
public:
    Derived(){
        cout<<"created Derived"<<endl;
    }
    ~Derived(){
        cout<<"Destroyed Derived"<<endl;
    }
};
class  BaseTwo{
public:
    BaseTwo(){
        cout<<"created Base2"<<endl;
    }
    virtual ~BaseTwo(){
        cout<<"Destroyed base2"<<endl;
    }
};
class DerivedTwo:public BaseTwo{
public:
    DerivedTwo(){
        cout<<"created Derived2"<<endl;
    }
    ~DerivedTwo(){
        cout<<"Destroyed Derived2"<<endl;
    }
};
int main(int argc, const char * argv[]) {
    Derived d;
    Base *ptr=new Derived();
    cout<<"Lets destroy the pointer reference"<<endl;
    delete ptr;
    cout<<"As this is a base class pointer only the base class is detroyed where as the derived class is not hence we use virutal destructors"<<endl;
    BaseTwo *ptrTwo=new DerivedTwo();
    cout<<"Now lets delete the reference of this pointer which the bas class has a virtual destructor"<<endl;
    delete ptrTwo;
    cout<<"We can see from the above that both the objects are deleted\n We can now see the object d is deleted before the end of program"<<endl;
    
    
}
