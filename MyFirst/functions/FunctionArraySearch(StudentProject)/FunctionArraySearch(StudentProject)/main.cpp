//
//  main.cpp
//  FunctionArraySearch(StudentProject)
//
//  Created by Abdullah Juhaif on 7/2/23.
//
// Create a function to create an array
// Create a function for linear search
#include <iostream>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace::std;
int * arrayInitialize(int size){
    int *p=new int[size];
    for(int i=0;i<size;i++){
        int random = arc4random_uniform(100);
        p[i]=random;
    }
    return p;
}

void printarray(int *p, int size){
    for (int i=0;i<size;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
int linearsearch( int *p, int size,int n){
    for (int i=0;i<size;i++){
        if(p[i]==n){
            return i;
        }
    }
    return -1;
}
int main(int argc, const char * argv[]) {
    int size,n;
    int *ptr;
    cout<<"Enter the size of the array\n";
    cin>>size;
    ptr=arrayInitialize(size);
    // As we are passing a pointer ptr here here we do not need to add &
    printarray(ptr,size);
    cout<<"Enter the number to be found within 100";
    cin>>n;
    int index = linearsearch(ptr,size,n);
    if (index<0){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"The element is found at :"<<index<<endl;
    }
    return 0;
}
