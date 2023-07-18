//
//  main.cpp
//  CountVowelinstring
//
//  Created by Abdullah Juhaif on 6/27/23.
//

#include <iostream>
#include<string>
using namespace::std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    int vowel=0;
    cout<<"Enter The string to count vowels\n";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowel++;
        }
    }
    cout<<"Total Number of vowel is "<<vowel<<endl;
    return 0;
}
