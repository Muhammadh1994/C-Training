//
//  sumofN.cpp
//  multiplicationTable
//
//  Created by Abdullah Juhaif on 6/17/23.
//

#include <iostream>
using  namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int sum=0;
    std::cout << "Enter the number for which the sum neeeds to be found";
    std::cin >> n;
    for (int i=n; i >= 0; i--)
    {
        sum=sum+i;
    }
    std::cout << "\nThe sum of "<<n<<" is "<<sum<<"\n";
    return 0;
}

