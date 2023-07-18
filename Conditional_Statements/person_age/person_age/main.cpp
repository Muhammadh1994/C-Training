//
//  main.cpp
//  person_age
//
//  Created by Abdullah Juhaif on 2/12/23.
//

#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the age";
    cin>>a;
    if (a>=12 && a<=50){
        cout <<"young"<<endl;
        return 0;
    }
    cout <<"not young"<<endl;
}
