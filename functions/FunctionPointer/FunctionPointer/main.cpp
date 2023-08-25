//
//  main.cpp
//  FunctionPointer
//
//  Created by Abdullah Juhaif on 8/1/23.
//

#include <iostream>
using  namespace::std;
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
// Signature of max and min are the same
int main(int argc, const char * argv[]) {
    // insert code here...
    // When assigning a pointer to a function the signature of the declaration should be the same
    int (*pointer)(int,int);
    pointer=&max;
    (*pointer)(10,5);
    cout << "Address of the function pointer: " << &pointer << endl;  // Print the address of the function pointer
    cout << "Address of the pointed function (max): " << pointer << endl;
    cout << "Result of : " << (*pointer)(10,5) << endl;
    pointer=&min;
    (*pointer)(10,5);
    cout << "Address of the function pointer: " << &pointer << endl;  // Print the address of the function pointer
    cout << "Address of the pointed function (min): " << pointer << endl;
    cout << "Result of : " << (*pointer)(10,5) << endl;
}
