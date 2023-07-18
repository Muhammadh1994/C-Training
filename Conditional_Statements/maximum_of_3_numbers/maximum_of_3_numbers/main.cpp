//
//  main.cpp
//  maximum_of_3_numbers
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
using  namespace::std;
typedef int number;
int main() {
    number a,b,c;
    std::cout << "enter three numbers";
    cin>>a>>b>>c;
    if (a>b && a>c){
        cout<<a<<endl;
    }
    else if (b>c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
    return 0;
}
