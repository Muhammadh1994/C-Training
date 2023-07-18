//
//  main.cpp
//  String Iterators
//
//  Created by Abdullah Juhaif on 6/25/23.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string str;
    string::iterator it;
    string::reverse_iterator rit;
    cout<<"Enter the string to iterate";
    getline(cin,str);
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
    }
    cout<<str<<endl;
    for(rit=str.rbegin();rit!=str.rend();rit++)
    {
        
        cout<<*rit;
    }
    cout<<str<<endl;
    // To change the string itslef change the value it is pointing to
    cout<<"\nChanging Strings with itterators";
    for(rit=str.rbegin();rit!=str.rend();rit++)
    {
        
        *rit=*rit-32;
    }
    cout<<endl<<str<<endl;
    return 0;
}
