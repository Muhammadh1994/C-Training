//
//  main.cpp
//  auto
//
//  Created by Abdullah Juhaif on 8/14/23.
// Let us study about the auto keyword

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int x= 10;
    float y = 10.5f;
    auto z = x+y;
    cout<<z;
    int a[10]={1,2,4,5,6,7};
    for(auto x : a){
        cout<<x<<endl;
    }
}
