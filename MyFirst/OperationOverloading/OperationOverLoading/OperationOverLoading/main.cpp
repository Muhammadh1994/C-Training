//
//  main.cpp
//  OperationOverLoading
//
//  Created by Abdullah Juhaif on 7/8/23.
//
// Operation overloading is the process of using operators(+,-,*,++,(),new,delete etc...) on the classes
// for Example like how we perform add(+) on integers we should also be able to add classes or use any of the operators to our class
#include <iostream>
using namespace std;
class Complex{
private:
    int real,imaginary;
public:
    Complex(int real=0,int imaginary=0);
    void setParam(int real,int imaginary);
    void disParam();
    Complex operator+(Complex x);
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
Complex Complex::operator+(Complex x){
    Complex temp;
    temp.real=real+x.real;
    temp.imaginary=imaginary+x.imaginary;
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
