//
//  main.cpp
//  ClassesStudentProject
//
//  Created by Abdullah Juhaif on 7/8/23.
//

#include <iostream>
#include <string>
using namespace std;

class Student{
//by default everything is private to a class
private:
    int rollNo,m1,m2,m3;
    float average;
    string name;
public:
    Student (int rollNo=0, int m1=0, int m2=0, int m3=0, string name="0");
    Student(Student &student, int rollNo=0,string name="0");
    void setParam(int rollNo, int m1, int m2, int m3, string name);
    void dispParam();
    float dispAverage();
    int TotalMarks();
    char Grade();
};
Student::Student(int rollNo, int m1, int m2, int m3, string name){
    setParam(rollNo,m1,m2,m3,name);
}
Student::Student(Student &student,int rollNo,string name){
    this->rollNo=rollNo;
    m1=student.m1;
    m2=student.m2;
    m3=student.m3;
    this->name=name;
}
void Student::setParam(int rollNo, int m1, int m2, int m3, string name){
    this->rollNo=rollNo;
    this->m1=m1;
    this->m2=m2;
    this->m3=m3;
    this->name=name;
}
float Student::dispAverage(){
    return average;
}
int Student::TotalMarks(){
    average=(m1+m2+m3)/3;
    return m1+m2+m3;
}
char Student::Grade(){
    if (average>60){
        return 'a';
    }
    else if (average<60){
        return 'c';
    }
    else{
        return 'b';
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int rollNo,m1,m2,m3;
    string name;
    cout << "Enter the name and rollno of the student!\n";
    getline(cin,name);
    cin>>rollNo;
    cout<<"Enter the grades\n";
    cin>>m1>>m2>>m3;
    Student S1(rollNo,m1,m2,m3,name);
    cout<<"For the Student: "<<name<<"\nThe total score is: "<<S1.TotalMarks()<<"\nThe Average is : "<<S1.dispAverage()<<"\nThe grade is : "<<S1.Grade()<<endl;
    cout<<"Enter the Second Student name and roll Number:"<<endl;
    cin.ignore();
    getline(cin,name);
    cin>>rollNo;
    Student S2(S1,rollNo,name);
    cout<<"For the Student: "<<name<<"\nThe total score is: "<<S1.TotalMarks()<<"\nThe Average is : "<<S1.dispAverage()<<"\nThe grade is : "<<S1.Grade()<<endl;
    return 0;
}
