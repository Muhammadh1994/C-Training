//
//  main.cpp
//  simpleIntre
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float p,t,r,i,A;
    cout << "Enter the Principal Amount";
    cin>>p;
    cout<<"Enter the time Duration";
    cin>>t;
    cout<<" Enter Rate of Intrest";
    cin>>r;
    A=p*(1+((r/100)*t));
    cout<<"Total amount paid :"<<A<<"\n";
    cout<<"Total Intrest Paid :"<<A-p<<"\n";
    return 0;
}
