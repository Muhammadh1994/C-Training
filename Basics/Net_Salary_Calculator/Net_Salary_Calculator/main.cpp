//
//  main.cpp
//  Net_Salary_Calculator
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
#include <cmath>
using namespace::std;
typedef float salarydetails;
int main() {
    salarydetails a,b,c,net;
    cout<<"Enter the Basic Slary";
    cin>>a;
    cout<<"Enter the % of allowance";
    cin>>b;
    cout<<"Enter the % of Deduction";
    cin>>c;
    net=a+(a*(b/100))-(a*(c/100));
    cout<<"Net Salary: "<<net<<endl;
    return 0;
}
