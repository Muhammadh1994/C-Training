//
//  main.cpp
//  SumOfArray
//
//  Created by Abdullah Juhaif on 6/18/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int A[5]={1,2,3,4,5};
    int sum=0;
    for(auto x:A){
        sum=sum+x;
    }
    std::cout <<sum<<"\n";
    return 0;
}
