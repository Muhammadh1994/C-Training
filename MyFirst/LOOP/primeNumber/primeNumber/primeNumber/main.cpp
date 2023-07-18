//
//  main.cpp
//  primeNumber
//
//  Created by Abdullah Juhaif on 6/17/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int count=0;
    std::cout << "Number to check for primeNumber\n";
    std::cin>> n;
    for (int i=1; i <= n; i++){
        if (n%i==0){
            count++;
        }
        
    }
    if (count == 2){
        std::cout<<"Is a prime Number\n";
    }
    else{
        std::cout<<"Not a prime Number\n";
    }
    
    return 0;
}
