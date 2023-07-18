//
//  main.cpp
//  PointerArithematics
//
//  Created by Abdullah Juhaif on 6/20/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int colomn,n;
    cout<<"Enter the size of the array";
    cin>>colomn;
    int *arr=new int[colomn];
    for(int i=0;i<colomn;i++){
        cout<<"Enter element of array";
        cin>>n;
        arr[i]=n;
    }
    for(int i=0;i<colomn;i++){
        cout<<*arr<<endl;
        arr++;
        cout<<arr<<endl;
    }
    delete []arr;
    return 0;
}
