//
//  main.cpp
//  working_hours
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the hours";
    cin>>a;
    if (a>=9 && a<=18){
        cout <<"working hours"<<endl;
        return 0;
    }
    cout <<"Leisure"<<endl;
}
