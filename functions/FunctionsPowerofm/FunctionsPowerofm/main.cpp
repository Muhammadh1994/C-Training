//
//  main.cpp
//  FunctionsPowerofm
//
//  Created by Abdullah Juhaif on 7/1/23.
//

#include <iostream>
#include <math.h>
#include <string>
using namespace::std;
int power(int x,int y){
    int z;
    z= pow(x,y);
    return z;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y;
    cout<<"Enter the number and power\nNumber:";cin>>x;cout<<"Power:";cin>>y;
    cout<<endl<<power(x,y)<<endl;
    return 0;
}
