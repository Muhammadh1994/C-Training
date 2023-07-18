//
//  main.cpp
//  StringSubstringComp
//
//  Created by Abdullah Juhaif on 6/25/23.
//

#include <iostream>
#include <cstring>
using namespace::std;
int main(int argc, const char * argv[]) {
    // Substrings are strings within a string ...
    // strstr is used to find the substring it prints strings from the pattern found till the end
    // to find a char we can use strchr which behaves the same way as strstr, but the advantage is we can print the left hand side charenters by using strrchr
    char s[100],s1[100],s2[100];
    cout<<"Enter the string"<<endl;cin.getline(s,100);
    cout<<"Enter the first substring to be found"<<endl;cin.getline(s1, 100);
    cout<<"Enter the first substring to be found"<<endl;cin.getline(s2, 100);
    if (strstr(s,s1) && (strstr(s,s2))){
        cout<<"The substring from the given pattern is:"<<endl<<strstr(s,s1)<<endl;
        cout<<"The substring from the given pattern is:"<<endl<<strstr(s,s2)<<endl;
    }
    else if (strstr(s,s2)){
        cout<<"The substring from the given pattern is:"<<endl<<strstr(s,s2)<<endl;
    }
    else if (strstr(s,s1)){
        cout<<"The substring from the given pattern is:"<<endl<<strstr(s,s1)<<endl;
    }
    else{
        cout<<"No substrings Found";
    }
     Comparing two strings gives 0 or positive or negetive value
    cout<<strcmp(s, s1);
    return 0;
}
