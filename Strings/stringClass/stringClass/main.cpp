//
//  main.cpp
//  stringClass
//
//  Created by Abdullah Juhaif on 6/25/23.
//

#include <iostream>
#include<string>
using namespace std;
int main(int argc, const char * argv[]) {
    // Functions of string are s.length, s.size, s.capacity,s.resize, s.max_size, s.clear and s.empty Let us look at these examples
    string str;
//    cout<<"Enter the string"; getline(cin,str);
//    cout<<str.length()<<endl;
//    cout<<str.size()<<endl;
//    cout<<str.capacity()<<endl;
//    str.resize(30);
//    cout<<str.capacity()<<endl;
//    cout<<str.max_size()<<endl;
//    for (int i=0;i<2;i++){
//        if(!str.empty()){
//            cout<<"Clearing the string\n";
//            str.clear();
//        }
//        else{
//            cout<<"String is already empty\n";
//        }
//    }
    //Other tring functions are s.append, s.insert, s.replace, s.erase, s.push_back, s.pop_back, s1.swap(s2)
    cout<<"Enter the new string\n";getline(cin,str);
    cout<<str.append("Bye")<<endl;
    cout<<str<<endl;
    cout<<str.insert(4, " ")<<endl;
    // the insert will insert from 5th element of the string and will insert the first five letters from the given string
    cout<<str.insert(5,"luck,y",5)<<endl;
    // The replace function will replace from the fifth element uptill the next fifth element
    cout<<str.replace(5, 5, "")<<endl;
    // Push back and pop back will and and remove chars from the end
    str.pop_back();
    cout<<str<<endl;
    string s2;
    cout<<"Enter the word to swap\n";getline(cin,s2);
    str.swap(s2);
    cout<<str<<endl;
    
    //More string functions s.copy(char des[]), s.find(str)or(char), s.rfind(str), s.find_firstof(), s.find_last_of(), s.substr(str,number), s.compare(str)
    int length;
    length=str.length()-1;
    char copy[length];
    str.copy(copy, length);
    cout<<copy<<endl;
    //s.find and s.rfind will give the index at which the given string or char is the s.find checks from left to rightwhere as s.rfind will check from the right to left
    cout<<str.find("l")<<endl;
    cout<<str.rfind("l")<<endl;
    //s.find_firstof(), s.find_last_of() is similar to find if one charecter is given if multiple charecters are given it will check for each charecter. also we can mention from whcih index it needs to start looking from
    cout<<str.find_first_of("l")<<endl;
    cout<<"Now lets see what happens if we give it an indes of 5"<<endl;
    cout<<str.find_first_of("l",5)<<endl;
    cout<<str.find_last_of("l")<<endl;
    cout<<"Now lets see the difference between find and first of \nThe following are their responses \nstr.find(le) : "<<str.find("le")<<endl<<"str.find_first_of(le): "<<str.find_first_of("le")<<endl;
    // the above shows the differece between find and firt off as fdiscussed above while the input is Hello World find will give us some random number as it searches for "le" where as first of will give 2 which is the incex of "e"
    //s.compare works the same way as strcmp which give -ve,0,or +ve depending on the strings if the strings are same it will give 0 as an output
    //s.substr can be used to extract from a string s.substr(3,4) will give the value from index 3 to the next 4 char lets see an example of this
    string str2=str;
    cout<<str.substr(3,4)<<endl;
    str2=str+" thanks";
    cout<<str2<<endl;
    // concatination for strings can be done by "+" operator behaves similar to strcat
    return 0;
}
