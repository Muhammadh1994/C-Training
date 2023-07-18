//
//  main.cpp
//  LinearSearch
//
//  Created by Abdullah Juhaif on 6/18/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int A[10]={},n,m;
        
    for(int i=0;i<10;i++){
        std::cout << "Enter the "<<i<<"th element of the Array\n";
        std::cin>>n;
        A[i]=n;
    }
    std::cout<<"Enter the number to be found";
    std::cin>>m;
    for(int i=0;i<10;i++){
        if (A[i] == m){
            std::cout<<"The search is successful and the element is "<<i<<"\n";
            return 0;
        }
        
    }
    std::cout<<"Element Not found\n";
    return 0;
}
