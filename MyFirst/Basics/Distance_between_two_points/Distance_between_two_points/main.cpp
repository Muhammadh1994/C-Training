//
//  main.cpp
//  Distance_between_two_points
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
#include <cmath>
using namespace::std;
int main() {
    float x1,x2,y1,y2,d;
    cout << "Enter the coordinates of the first point";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of the second point";
    cin>>x2>>y2;
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"total distance: "<<d<<"\n";
    return 0;
}
