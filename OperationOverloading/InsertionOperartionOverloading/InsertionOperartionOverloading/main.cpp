//
//  main.cpp
//  InsertionOperartionOverloading
//
//  Created by Abdullah Juhaif on 7/9/23.
//
// When we are using Accessors to display the parameters we cannot call them in th emain funtion using "cout<<" in order to make that happen we need to use insertion operation overoading
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
    //Friend Operation overloading
    //friend Complex operator+(Complex x, Complex y);(The code is in FriendOperatorOverloading)
    // In the above disParam we can use to display the values by calling the object funtion like in the below lines "c1.disParam()"; in order to display as "cout<<c1" we can use the insertion Operation overloading which is also a friend funtion
    friend ostream & operator<<(ostream &o,Complex &x);
};
Complex::Complex(int real, int imaginary){
    setParam(real,imaginary);
}
void Complex::setParam(int real, int imaginary){
    this->real=real;
    this->imaginary=imaginary;
}
void Complex::disParam(){
    cout<<real<<"+i"<<imaginary<<" This is the output of disParam() in the class";
}
Complex Complex::operator+(Complex x){
    Complex temp;
    temp.real=real+x.real;
    temp.imaginary=imaginary+x.imaginary;
    return temp;
}
ostream & operator<<(ostream &o,Complex &x){
    o<<x.real<<"+i"<<x.imaginary<<" This is the output of Insertion Operation overloading cout<<";
    return o;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Complex c1(10,10);
    Complex c2(9,9);
    Complex c3;
    c3=c1+c2;
    c1.disParam();cout<<endl;
    cout<<c1<<endl;
    c2.disParam();cout<<endl;
    cout<<c2<<endl;
    c3.disParam();cout<<endl;
    cout<<c3<<endl;
    return 0;
}

