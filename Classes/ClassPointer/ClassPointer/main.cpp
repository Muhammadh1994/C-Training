//
//  main.cpp
//  ClassPointer
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
    // Lets point a pointer to a memory in stack and a memory in heap
    // create an objec in stac and point the pointer to it
    Rectangle r1;
    Rectangle *p=&r1;
    p->length=10;
    p->breadth=10;
    //Create a Ptr and assign the ptr to create the object in heap memory
    Rectangle *ptr=new Rectangle;
    ptr->length=10;
    ptr->breadth=20;
    cout<<"With stack object :"<<p->area()<<endl;
    cout<<"With object in heap: "<<ptr->area()<<endl;
    return 0;
}
