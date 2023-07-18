//
//  main.cpp
//  ClassBasics
//
//  Created by Abdullah Juhaif on 7/3/23.
//

#include <iostream>
using namespace std;
class Rectangle{
    
public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(int argc, const char * argv[]) {
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=10;
    cout<<"Area of the first rectangle: "<<r1.area()<<endl;
    cout<<"Perimeter of the rectangle :"<<r1.perimeter()<<endl;
    return 0;
}
