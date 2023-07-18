//
//  main.cpp
//  ReverseDigit
//
//  Created by Abdullah Juhaif on 6/17/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    long n,k,reverse=0;
    std::cout << "ِEnter the NUmber to reverse\n";
    std::cin >>n;
    while (n>0) {
            k = n%10;
            reverse= reverse*10+k;
            n=n/10;
    }
    std::cout <<reverse<<"\n";
    return 0;
}
