//
//  main.cpp
//  FuntionsAdd
//
//  Created by Abdullah Juhaif on 7/1/23.
//

#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int add(int x, int y){
    int c;
    c=x+y;
    return c;
}
int main() {
    int a,b,sum;
    cout<<"Enter the number to be added";
    cin>>a>>b;
    sum=add(a,b);
    cout<<endl<<sum<<endl;
    return 0;
}
