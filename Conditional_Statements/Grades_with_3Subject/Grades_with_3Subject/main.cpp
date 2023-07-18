//
//  main.cpp
//  Grades_with_3Subject
//
//  Created by Abdullah Juhaif on 2/13/23.
//

#include <iostream>
#include <cmath>
using namespace::std;
typedef float marks;
int main() {
    marks m1,m2,m3;
    float avg;
    string grade;
    // insert code here...
    std::cout << "Enter the marks of the student\n";
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3;
    if (avg < 60){
        if(avg <= 35){
            grade="C";
        }
        else{
            grade="B";
        }
    }
    else{
        grade="A";
    }
    cout<<"The Grade is :"<<grade<<endl;
    return 0;
}
