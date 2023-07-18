//
//  main.cpp
//  PatternLowerTriangle
//
//  Created by Abdullah Juhaif on 6/19/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
