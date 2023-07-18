//
//  main.cpp
//  Distance Calculation
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
#include <cmath>
using namespace::std;
int main() {
    float s,u,v,a;
    cout<<"Enter Initial Velocity, Final Velocity and Acceleration";
    cin>>u>>v>>a;
    s=(pow(v,2)-pow(u,2))/(2*a);
    cout<<"Distance = "<<s;
    return 0;
}
