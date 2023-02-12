//
//  main.cpp
//  ReadString
//
//  Created by Abdullah Juhaif on 2/11/23.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    string name;
    cout << "Enter the Name\n";
    getline(cin,name);
    cout<<"\nHi Mr./Mrs.:\n"<<name<<"\n";
    return 0;
}
