//
//  main.cpp
//  FuntionCallbyAddressandCallbyRefference
//
//  Created by Abdullah Juhaif on 7/1/23.
//

#include <iostream>
using namespace::std;
void increment(int a,int b){
    
    a++;
    b++;
}
void incrementbyaddress(int *a,int *b){
    (*a)++;
    (*b)++;
}
int main(int argc, const char * argv[]) {
    int x=10,y=10;
    cout<<"call by value before: x"<<x<<"  y:"<<y<<endl;
    increment(x,y);
    cout<<"call by value after: x"<<x<<"  y:"<<y<<endl;
    cout<<"call by address before: x"<<x<<"  y:"<<y<<endl;
    incrementbyaddress(&x,&y);
    cout<<"call by address After: x"<<x<<"  y:"<<y<<endl;
}
