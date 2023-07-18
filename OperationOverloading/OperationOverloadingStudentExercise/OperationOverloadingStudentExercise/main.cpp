//
//  main.cpp
//  OperationOverloadingStudentExercise
//
//  Created by Abdullah Juhaif on 7/9/23.
// In this program we will be using operation overloading and insertion operation overloading, The aim is to get 2 rational numbers and use the cout<< to display the numbers

#include <iostream>
using namespace::std;
class rational{
private:
    int p;
    int q;
public:
    rational(int p=0, int q=0);
    void setParam(int p, int q);
    rational operator+(rational &x);
    friend ostream & operator<<(ostream &o, rational &x);
};
rational::rational(int p, int q){
    setParam(p,q);
}
void rational::setParam(int p, int q){
    this->p=p;
    this->q=q;
}
rational rational::operator+(rational &x){
    rational temp;
    temp.p=(this->p*x.q)+(x.p*this->q);
    temp.q=(this->q*x.q);
    return temp ;
}
ostream & operator<<(ostream &o, rational &temp){
    o<<temp.p<<"/"<<temp.q;
    return o;
}
int main(int argc, const char * argv[]) {
    int p1,p2,q1,q2;
    cout<<"Enter the Numerator of the and dinominators";
    cout<<"\np1:";cin>>p1;
    cout<<"p2:";cin>>p2;
    cout<<"q1:";cin>>q1;
    cout<<"q2:";cin>>q2;
    rational r1(p1,q1),r2(p2,q2),r3;
    r3=r1+r2;
    cout<<r1<<"+"<<r2<<" is "<<r3<<" without factoring"<<endl;
    
}
