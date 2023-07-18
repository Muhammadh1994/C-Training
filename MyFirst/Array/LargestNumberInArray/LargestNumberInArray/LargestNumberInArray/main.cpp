//
//  main.cpp
//  LargestNumberInArray
//
//  Created by Abdullah Juhaif on 6/18/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int A[7]={},n,max=0;
    
    for(int i=0;i<7;i++){
        std::cout << "Enter the "<<i<<"th element of the Array\n";
        std::cin>>n;
        A[i]=n;
    }
    for(int i=0;i<7;i++)
    {
        if (A[i] > max)
        {
            max=A[i];
        }
    }
    std::cout<<max;
    return 0;
}
