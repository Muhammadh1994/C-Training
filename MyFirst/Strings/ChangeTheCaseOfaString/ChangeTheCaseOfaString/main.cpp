//
//  main.cpp
//  ChangeTheCaseOfaString
//
//  Created by Abdullah Juhaif on 6/27/23.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    string type;
    cout<<"Enter the string for which case needs to be changed\n"; getline(cin,str);
    cout<<"To which case should the string be changed to(lower or upper)\n";
    getline(cin,type);
    if (type=="lower"){
        for (int i=0;i<str.length();i++){
            str[i]=str[i]+32;
        }
    }
    else{
        for (int i=0;i<str.length();i++){
            str[i]=str[i]-32;
        }
    }
    cout<<"\n"<<str;
    return 0;
}
