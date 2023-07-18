//
//  main.cpp
//  InheritanceStudentProject
//
//  Created by Abdullah Juhaif on 7/12/23.
//

#include <iostream>
#include <string>
using namespace::std;
//Classes
class Employee{
protected:
    string name;
    int PID;
public:
    Employee(string name="0", int PID=0);
    void setParam(string name, int PID);
    void disParam();
};
class Fulltime:public Employee{
private:
    int salary;
public:
    Fulltime(string name="0", int PID=0,int salary=0);
    void setSalary(int salary);
    friend ostream &operator<<(ostream &o,Fulltime &F);
};
class Contractor:public Employee{
private:
    int hours,rate,salary;
public:
    Contractor(string name="0", int PID=0,int hours=0, int rate=0);
    void setHours(int hours,int rate);
    void wage(int hours,int rate);
    friend ostream &operator<<(ostream &o,Contractor &C);
};

//Class member definitions using Scope resolution so the funtions are outline functions
  //Constructors
Employee::Employee(string name,int PID){
    setParam(name,PID);
}
Fulltime::Fulltime(string name, int PID,int salary):Employee(name,PID){
    setSalary(salary);
}
Contractor::Contractor(string name,int PID,int hours,int rate):Employee(name,PID){
    setHours(hours,rate);
}
  //Mutators
void Employee::setParam(string name, int PID){
    this->name=name;
    this->PID=PID;
}
void Fulltime::setSalary(int salary){
    this->salary=salary;
}
void Contractor::setHours(int hours, int rate){
    this->hours=hours;
    this->rate=rate;
}
  //Computation Funtion
void Contractor::wage(int hours, int rate){
    salary=hours*rate;
}
void Employee::disParam(){
    cout<<"The name of the employee is: "<<name<<endl;
    cout<<"The PID of the employee is: "<<PID<<endl;
}
ostream &operator<<(ostream &o,Fulltime &F){
    o<<F.name<<" is a Fulltime Employee whose PID is "<<F.PID<<"With a salary of : $"<<F.salary<<"/month";
    return o;
}
ostream &operator<<(ostream &o,Contractor &C){
    C.wage(C.hours, C.rate);
    o<<C.name<<" is a Fulltime Employee whose PID is "<<C.PID<<" With a salary of : $"<<C.salary<<"/month";
    return o;
}


int main(int argc, const char * argv[]) {
    Fulltime Raj("RAJ",12345,5000);
    cout<<Raj<<endl;
    Contractor Ram("RAM",23456,160,50);
    cout<<Ram<<endl;
}
