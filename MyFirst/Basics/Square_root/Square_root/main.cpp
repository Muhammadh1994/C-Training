//
//  main.cpp
//  Square_root
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
#include<cmath>
using namespace::std;
int main() {
    // insert code here...
    int a,b,c;
    float r1,r2;
    cout << "Enter the quotient of X2";
    cin>>a;
    cout << "Enter the quotient of X";
    cin>>b;
    cout << "Enter the quotient of Constant";
    cin>>c;
    r1=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    r2=(float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"The roots are "<<r1<<" and "<<r2<<"\n";
    return 0;
}
