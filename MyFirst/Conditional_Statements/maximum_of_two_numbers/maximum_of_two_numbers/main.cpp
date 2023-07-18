//
//  main.cpp
//  maximum_of_two_numbers
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
using namespace::std;
int main() {
    int a,b;
    cout<<"Enter the two numbers to: ";
    cin>>a>>b;
    if (a>b)
    {
        cout<<"The greater Number is: "<<a<<endl;
        return 0;
    }
    cout<<"The greater Number is: "<<b<<endl;
    return 0;
}
