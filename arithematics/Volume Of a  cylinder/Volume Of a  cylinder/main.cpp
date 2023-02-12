//
//  main.cpp
//  Volume Of a  cylinder
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
#include <cmath>
using  namespace::std;
int main() {
    // insert code here...
    float r,h,v;
    cout<<"Enter the radius and height if the cylinder";
    cin>>r>>h;
    v=M_PI*pow(r,2)*h;
    cout<<"Volume of the cylinder: "<<v<<"\n";
    return 0;
}
