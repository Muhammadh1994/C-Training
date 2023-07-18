//
//  main.cpp
//  FriendOperatorOverloading
//
//  Created by Abdullah Juhaif on 7/8/23.
//

//
//  main.cpp
//  FriendOperatorOverloading
//
//  Created by Abdullah Juhaif on 7/8/23.
// Similar to operation overloading but here instead of doing the overloading from the one of the class we can of the class we use a thirdclass and do the operations
#include <iostream>
using namespace std;
class Complex{
private:
    int real,imaginary;
public:
    Complex(int real=0,int imaginary=0);
    void setParam(int real,int imaginary);
    void disParam();
    friend Complex operator+(Complex x,Complex y);
};
Complex::Complex(int real, int imaginary){
    setParam(real,imaginary);
}
void Complex::setParam(int real, int imaginary){
    this->real=real;
    this->imaginary=imaginary;
}
void Complex::disParam(){
    cout<<real<<"+i"<<imaginary;
}
//Friend functions are declared inside the class, but their definition is outside the class scope Hence we cannot use scope resolution for this.
Complex operator+(Complex x,Complex y){
    Complex temp;
    temp.real=y.real+x.real;
    temp.imaginary=y.imaginary+x.imaginary;
    return temp;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Complex c1(10,10);
    Complex c2(9,9);
    Complex c3;
    c3=c1+c2;
    c1.disParam();cout<<endl;
    c2.disParam();cout<<endl;
    c3.disParam();cout<<endl;
    return 0;
}
