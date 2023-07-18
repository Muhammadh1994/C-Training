//
//  main.cpp
//  Factorial
//
//  Created by Abdullah Juhaif on 6/17/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int factorial=1;
    std::cout << "Enter the number for which factorial needs to be found\n";
    std::cin >>n;
    for (int i=1;i<=n; i++){
        factorial=factorial*i;
    }
    std::cout <<"\nThe factorial of the number "<<n<<" is "<<factorial<<"\n";
    return 0;
}
