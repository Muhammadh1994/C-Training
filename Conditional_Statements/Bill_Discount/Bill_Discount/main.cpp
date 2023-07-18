//
//  main.cpp
//  Bill_Discount
//
//  Created by Abdullah Juhaif on 2/13/23.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // insert code here...
    float amount,newAmount;
    std::cout << "Enter the bill amount\n";
    cin>>amount;
    if(amount<0){
        cout<<"Invalid Bill amount"<<endl;
        return 0;
    }
    if(amount>=5000)
    {
        newAmount=amount-0.2*amount;
    }
    else if (amount>=2000)
    {
        newAmount=amount-0.1*amount;
    }
    else {
        newAmount=amount-0.05*amount;
    }
    cout<<"Final Bill :"<<newAmount<<endl;
    return 0;
}
