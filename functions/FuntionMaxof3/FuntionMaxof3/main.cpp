//
//  main.cpp
//  FuntionMaxof3
//
//  Created by Abdullah Juhaif on 7/1/23.
//

#include <iostream>
using namespace std;
int max(int a,int b,int c){
    if(a>b && a>c)
        {
            return a;
        }
        else if (b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,z;
    cout<<"Enter the three numbers";
    cin>>x>>y>>z;
    cout<<endl<<max(x,y,z)<<endl;
    return 0;
}
