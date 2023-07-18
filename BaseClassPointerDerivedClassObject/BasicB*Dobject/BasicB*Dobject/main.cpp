//
//  main.cpp
//  BasicB*Dobject
//
//  Created by Abdullah Juhaif on 7/13/23.
//
// We have see in classes that a pointer can be assigned to an existing class or we can create a pointer and point it to an object  or create a object in heap using new and reference it using a ptr, but in the above example the type of the Pointer and the object created were the same Here we are going to see:
// A pointer of type base class can be assigneed to an object of Derived class

#include <iostream>
using namespace::std;
class first{
public:
    void func1(){
        cout<<"Base class";
    }
};
class Sec:public first{
public:
    void func2(){
        cout<<"Derived class";
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    first *ptr=new Sec();
    //the below is not allowed as it is Deriver class pointer being assigned to a base class object
    //Sec *p=new first();
    ptr->func1();
    // Comiler error as ptr is of type first and thus it does not have the derived class(sec) members
   // ptr->func2();
}
