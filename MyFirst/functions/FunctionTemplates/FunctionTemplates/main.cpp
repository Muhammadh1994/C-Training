//
//  main.cpp
//  FunctionTemplates
//
//  Created by Abdullah Juhaif on 7/1/23.
//

#include <iostream>
using namespace::std;
template <class T>
T add(T x, T y){
    return x+y;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y;
    float a,b;
    x=2;
    y=3;
    cout<<endl<<add(x,y);
    a=2.5f;
    b=3.5f;
    cout<<endl<<add(a,b);
    return 0;
}
