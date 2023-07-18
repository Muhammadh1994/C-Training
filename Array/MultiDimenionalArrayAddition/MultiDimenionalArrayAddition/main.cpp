//
//  main.cpp
//  MultiDimenionalArrayAddition
//
//  Created by Abdullah Juhaif on 6/19/23.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int A[2][3]={};
    int B[2][3]={};
    int C[2][3]={};
    cout<<"Enter the elements of the 2x3 array";
    for (auto& x:A){
        for(auto& y:x){
            cin>>y;
        }
    }
    cout<<"Enter the elements of the 2x3 array";
    for (auto& c:B){
        for(auto& d:c){
            cin>>d;
        }
    }
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for (auto& x:C){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
