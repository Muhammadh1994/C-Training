//
//  main.cpp
//  Day_Number_switch
//
//  Created by Abdullah Juhaif on 2/13/23.
//

#include <iostream>
using  namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int day;
    std::cout << "Ente the Day Number";
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"invalid";
    }
    return 0;
}
