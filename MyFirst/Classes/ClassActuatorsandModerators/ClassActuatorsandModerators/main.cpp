//
//  main.cpp
//  ClassActuatorsandModerators
//
//  Created by Abdullah Juhaif on 7/3/23.
//

#include <iostream>
using namespace std;
class Rectangle{
//We are making this private so the user does not set garbage values
private:
    int length;
    int breadth;
public:
    //This is an Actuator which sets the length and breadth
    void setValues(int l,int b){
        length= l;
        breadth = b;
    }
    //The following is an Mutator which is used to display what ever is set by the actuators
    void disValues(){
        cout<<"Lenght :"<<length;
        cout<<"breadth :"<<breadth;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Rectangle *p = new Rectangle();
    p->setValues(10,5);
    p->disValues();
    return 0;
}
