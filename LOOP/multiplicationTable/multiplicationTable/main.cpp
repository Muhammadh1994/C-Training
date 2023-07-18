//
//  main.cpp
//  multiplicationTable
//
//  Created by Abdullah Juhaif on 6/17/23.
//

#include <iostream>
using namespace std;;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int multi;
    std::cout << "Hello, Which Multiplication table do you want\n";
    std::cin >> n;
    for (int i=0; i <= 12; i++)
    {
        multi=n*i;
        std::cout <<n <<"*"<< i <<"="<< multi<<"\n";
    }
    return 0;
}
