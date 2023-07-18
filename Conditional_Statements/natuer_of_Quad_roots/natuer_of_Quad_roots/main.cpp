//
//  main.cpp
//  natuer_of_Quad_roots
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
#include<cmath>
using namespace::std;
int main() {
    // insert code here...
    float a,b,c;
    float r1,r2,d;
    cout << "Enter the quotient of X2";
    cin>>a;
    cout << "Enter the quotient of X";
    cin>>b;
    cout << "Enter the quotient of Constant";
    cin>>c;
    d=pow(b,2)-4*a*c;
    r1=(float)(-b+sqrt(d))/(2*a);
    r2=(float)(-b-sqrt(d))/(2*a);
    if (d==0){
        cout<<"real and equal "<<r1<<endl;
    }
    else if (d>0){
        cout<<"real and unequal "<<r1<<" "<<r2<<endl;
    }
    else {
        cout<<"imaginary"<<endl;
    }
}
    
    
    
