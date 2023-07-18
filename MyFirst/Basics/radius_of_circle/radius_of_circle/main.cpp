//
//  main.cpp
//  radius_of_circle
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    // insert code here...
    float r,area;
    cout<<"enter the radius";
    cin>>r;
    area=M_PI*pow(r,2);
    cout<<"area of the circle is: "<<area<<endl;
    return 0;
}
