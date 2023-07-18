//
//  main.cpp
//  AverageOFanarray
//
//  Created by Abdullah Juhaif on 6/19/23.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int arr[100]={};
    int sum=0;
    float avg=0;
    cout<<"Enter the Number of elements of the array";
    cin>>n;
    for (int i=0; i<n;i++){
        cout<<"Enter the Element";
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        sum += arr[i];
    }
    avg=sum/n;
    cout<<avg<<endl;
    return 0;
}
