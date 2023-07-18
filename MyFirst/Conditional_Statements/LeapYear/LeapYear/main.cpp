//
//  main.cpp
//  LeapYear
//
//  Created by Abdullah Juhaif on 2/13/23.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int year;
    std::cout << "Enter the Year\n";
    cin>>year;
    if (year%100 != 0){
        if (year%4 == 0){
            cout<<"Its a leap year"<<endl;
        }
        else{
            cout<<"Its not a leap year"<<endl;
        }
    }
    else{
        if (year%400 == 0){
            cout<<"Its a leap year"<<endl;
        }
        else{
            cout<<"Its not a leap year"<<endl;
        }
    }
    return 0;
}
