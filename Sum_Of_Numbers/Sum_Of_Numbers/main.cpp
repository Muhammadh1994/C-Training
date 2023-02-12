//
//  main.cpp
//  Sum_Of_Numbers
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
using namespace::std;
int main() {
    string formula;
    int n;
    int sum=0;
    string type;
    cout<<"Are we using formula today";
    cin>>formula;
    cout<<"Entert the number till which the sum should be found:";
    cin>>n;
    if (formula == "yes")
    {
        sum=n*(n+1)/2;
        type="formula";
    }
    else
    {
        for (int i=0;i<=n;i++)
        {
            sum = sum+i;
            type="for loop";
        }
    }
    cout<<"The sum is : "<<sum<<" using "<<type<<"\n";
    return 0;
}
