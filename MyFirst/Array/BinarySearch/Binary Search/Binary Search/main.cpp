//
//  main.cpp
//  Binary Search
//
//  Created by Abdullah Juhaif on 6/18/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int A[10]={},n,mid,low=0,high,element;
    high=9;
    for(int i=0;i<10;i++){
        cout << "Enter the "<<i<<"th element of the Array\n";
        cin>>n;
        A[i]=n;
    }
    cout<<"Element to be found"; std::cin>>element;
    int m = sizeof(A) / sizeof(A[0]);
    sort(A, A + m);
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if (element==A[mid]){
            cout<<"element found at "<<mid<<"\n";
            return 0;
        }
        else if (element>A[mid]){
            low++;
        }
        else{
            high++;
        }
    }
    cout<<"element not found";
    
    return 0;
}
