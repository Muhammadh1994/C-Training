//
//  main.cpp
//  ValidUsername
//
//  Created by Abdullah Juhaif on 6/29/23.
//

#include <iostream>
#include <string>
using namespace::std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string email;
    cout<<"Enter the Email";
    getline(cin,email);
    cout<<"Lets get the userName\n";
    int userNameLength=(int)email.find('@');
    string userName=email.substr(0,userNameLength);
    cout<<"The User Name is "<<userName<<endl;
    for (int i=0; i<userName.length();i++){
        if (userName[i] < 'A' || (userName[i] > 'Z' && userName[i] < 'a') || userName[i] > 'z'){
            if (!isdigit(userName[i])){
                if (userName[i] != '_' && userName[i] != '.'){
                    cout<<"Username Contains invalid value "<<userName[i]<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"valid address"<<endl;
    return 0;
}
