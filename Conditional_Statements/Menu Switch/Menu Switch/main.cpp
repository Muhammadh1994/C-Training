//
//  main.cpp
//  Menu Switch
//
//  Created by Abdullah Juhaif on 2/13/23.
//

#include <iostream>
using  namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int op,n1,n2;
    std::cout << "Ente the Two Numbers";
    cin>>n1>>n2;
    cout<<"1: Add\n2: Sub\n3: Div\n4: Mul\n5: Mod";
    cin>>op;
    switch(op){
        case 1:
            cout<<n1+n2;
            break;
        case 2:
            cout<<n1-n2;
            break;
        case 3:
            float c;
            c=(float)n1/n2;
            cout<<c;
            break;
        case 4:
            cout<<n1*n2;
            break;
        case 5:
            cout<<n1%n1;
            break;
        default:
            cout<<"invalid";
    }
    return 0;
}

