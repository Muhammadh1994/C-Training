//
//  main.cpp
//  preprocessor
//
//  Created by Abdullah Juhaif on 7/20/23.
//

#include <iostream>
#define H 10
//This means if it is not defined then use the following
#ifndef H
#define H 11
#endif
#ifndef z
#define z 11
#endif
#define sqr(x) (x*x)
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout <<H<<std::endl;
    std::cout<<sqr(5)<<std::endl;
    std::cout<<z<<std::endl;
    return 0;
}
