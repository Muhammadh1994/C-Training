//
//  main.cpp
//  StringLenghtConcatenateCopy
//
//  Created by Abdullah Juhaif on 6/20/23.
//

#include <iostream>
#include <string.h>
using namespace std;
int main() {
    // insert code here...
    char s[100];
    char s1[100];
    char s2[100];
    char s3[100];
    // intilize using a pointer
    //char *st;
    cout<<"Enter the name ";
    cin.getline(s,100);
    //cout<<"Enter the secodn string";
    //cin.getline(st, 100);
    cout<<"\nWelcome "<<s<<endl;
    cout<<"\nLength of the string  s="<<strlen(s)<<endl;
    //cout<<"\nLength of the string  string="<<strlen(st)<<endl;
    cout<<"\nEnter the two strings to concatinate";
    cin.getline(s1,100);
    cin.getline(s2, 100);
    cout<<endl<<strcat(s1,s2);
    cout<<"\n Only concatinate first three letters of the string";
    cout<<endl<<strncat(s1, s2, 3)<<endl;
    cout<<"\n Copy string two to string 1"<<endl;
    cout<<strcpy(s1, s2);
    cout<<"\n The copied string s1 = "<<s1<<endl;
    return 0;
    
}
