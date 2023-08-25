//
//  main.cpp
//  Area_Triangle
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
using namespace std;
int main() {
    float height,width,area;
    cout<<"Enter the Height and width of the triangle";
    cin>>height>>width;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    area=(height*width)/2;
    cout<<"Area of the triangle is: \n"<<area<<"\n";
    return 0;
}
