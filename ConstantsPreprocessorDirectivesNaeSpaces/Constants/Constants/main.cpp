//
//  main.cpp
//  Constants
//
//  Created by Abdullah Juhaif on 7/19/23.
//

#include <iostream>
using namespace std;
// Let us understand various types of constants

class test{
private:
    int a=10;
public:
    void  disp(){
        a++;
    }
    //Cnstant member function (Type 5)
    void disp1()const{
        // As this function itself is constant it does not change any value
        // Hence the following is not possible and we get an error Cannot assign to non-static data member within const member function 'disp1'
        //a++;
    }
};
void testfun(const int &a,const int &b){
    cout<<"We are pazzing y an dz as reference hence this is an oinline function which can alter their values but because we are passing them as constant we cant change them"<<endl;
    //The below lines cause "Cannot assign to variable 'a' with const-qualified type 'const int &'"
    //a++;
    //b++
}
int main(int argc, const char * argv[]) {
    // This is a constant data member(Type 1)
    const int x=10;
    int y=11;
    int z=12;
    // This is not possibel as it is constant
    //x++;
    cout<<x<<endl;
    //Constant pointer reference ie locks the referenced value(Type 2)
    int const *ptr=&x;
    cout<<"Pointer Location is "<<ptr<<". The value stored in the location "<<*ptr<<endl;
    cout<<"We can point the pointer to another variable but we can increment the value stored in the address (x)"<<endl;
    // This results in read onlu variable is not assigned
    //(*ptr)++;
    ptr=&y;
    cout<<"Pointer Location is "<<ptr<<endl<<"Values is "<<*ptr<<" We can see the ptr is pointng to a new addrress as the prt is a pointer pointing to the const we were not able to increment it as this pointer is pointing to a constant value only(which means int const *ptr=&y mean whatever the referenced value is its constant "<<endl;
    // Now lets lock the pointer alone (Type 3)
    int * const pt=&y;
    // As we can see this is not allowed as the pointer is constant here but we modify the refenrece
    //pt=&z;
    cout<<"Value of refence of pt is "<<*pt<<" Lets increment the value of stored in reference of pt "<<(*pt)++<<" We can see the value of y by '(*pt)++' is chnaged to "<<y<<" As pt is pointing to y we can derefence it and see "<<(*pt)++<<endl;
    // Lets make both the pointer and reference a cosnt (Type 4)
    const int * const p=&z;
    //Both are not allowed
    //(*p)++;
    //p=&y;
    // let us see constant funtions (Type 6) this is mainly for inline funtions only
    //  Let us call testfun() with y and z;
    testfun(y,z);
}
