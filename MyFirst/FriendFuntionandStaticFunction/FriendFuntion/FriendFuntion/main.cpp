//
//  main.cpp
//  FriendFuntion
//
//  Created by Abdullah Juhaif on 7/15/23.
//

#include <iostream>
using namespace::std;
//As this is a friend class it needs to be defines before being called a friend
class you;
class Base{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun1();
    friend you;
};
void fun(){
    Base b;
    // this function Cannot access as it is out of scope
    //b.a=10;
    //b.b=10;
    b.c=10;
}
void fun1(){
    Base b;
    // this function able to access the variables as its a fried funtion
    b.a=10;
    b.b=10;
    b.c=10;
}
class yours{
    Base b;
public:
    void test(){
        // this class is not a frinend class hence it is not able to access a and b
        //b.a=10;
        //b.b=10;
        b.c=10;
    }
};
class you{
    Base b;
public:
    void test(){
        // this class is not a frinend class hence it is not able to access a and b
        b.a=10;
        b.b=10;
        b.c=10;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
