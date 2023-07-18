//
//  main.cpp
//  FunctionOverriding
//
//  Created by Abdullah Juhaif on 7/13/23.
//

#include <iostream>
using namespace std;
class base{
public:
    void dis(){
        cout<<"From Base Class"<<endl;
    }
    void disp1(){
        cout<<"From base class but with overloading"<<endl;
    }
};
class derived:public base{
public:
    void dis(){
        cout<<"This class is the same as the one in base without overloading this is function overriding"<<endl;
    }
    void disp1(int x){
        cout<<"From Derived class but with overloading"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    derived d;
    d.dis();
    // As this function is overloaded in in order for the object to understand under which scope we are calling the funtion from
    d.base::disp1();
    d.disp1(10);
    
    return 0;
}
