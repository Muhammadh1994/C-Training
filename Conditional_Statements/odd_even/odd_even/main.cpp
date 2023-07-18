//
//  main.cpp
//  odd_even
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the number";
    cin>>a;
    if (a%2==0){
        cout <<"Number is even"<<endl;
        return 0;
    }
    cout <<"Number is odd"<<endl;
}
