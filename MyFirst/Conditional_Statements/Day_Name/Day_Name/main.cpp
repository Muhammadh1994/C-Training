//
//  main.cpp
//  Day_Name
//
//  Created by Abdullah Juhaif on 2/13/23.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int day;
    std::cout << "Enthe the number of the day\n";
    cin>>day;
    if (day <= 7)
    {
            if (day == 1)
            {
                cout<<"sun";
            }
            else if (day == 2)
            {
                cout<<"mon";
            }
            else if (day == 3)
            {
                cout<<"tue";
            }
            else if (day == 4)
            {
                cout<<"wed";
            }
            else if (day == 5)
            {
                cout<<"thu";
            }
            else if (day == 6)
            {
                cout<<"fri";
            }
            else
            {
                cout<<"sat";
            }
    }
    else {
        cout<<"Invalid date number"<<endl;
    }
    return 0;
}
