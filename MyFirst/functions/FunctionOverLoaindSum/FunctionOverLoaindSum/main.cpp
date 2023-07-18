//
//  main.cpp
//  FunctionOverLoaindSum
//
//  Created by Abdullah Juhaif on 7/1/23.
//

#include <iostream>
using namespace::std;
int add(int x, int y){
    return x+y;
}
int add(int p, int q, int r){
    return p+q+r;
}
int main(int argc, const char * argv[]) {
    // Function overloading is the process of havingg the same naem for multiple functions
    int a=10,b=10,c=10;
    cout<<"Sum for two Numbers: "<<add(a,b)<<endl;
    cout<<"Sum for three Numbers: "<<add(a,b,c)<<endl;
    return 0;
}
