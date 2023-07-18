//
//  main.cpp
//  StaticMemberandFuntions
//
//  Created by Abdullah Juhaif on 7/15/23.
//
// Static Members in a funtion mean that these members do not get deleted after the funtion call but remain throughout during the code and can be accessed by the same funtion called in different place similarly in classes the static members can be accessed by all the object of the class. Also Static funtions are functions which can access only these static  variables and not the other variables of the class
// These static member functions and members can be acctes by the class or the object using scope resolution

#include <iostream>
using  namespace::std;
class student{
private:
    string name;
public:
    static int id;
    student(string name="0");
    friend ostream &operator<<(ostream &o,student &s);
    static void dis(){
        cout<<"Call from static funtion we cannot call name as it is not static member  and the roll number is "<<id<<endl;
    }
};
student::student(string name){
    this->name=name;
    id++;
}
ostream &operator<<(ostream &o,student &s){
    o<<"The Added student "<<s.name<<" And his roll number is "<<s.id;
    return o;
}
int student::id=0;
int main(int argc, const char * argv[]) {
    cout<<"Calling static member from main using class\n The roll Number is  "<<student::id<<endl;
    student s1("Raj");
    cout<<s1<<endl;
    student s2("Ram");
    cout<<s2<<endl;
    cout<<"Because S1 and S2 are initiated we now the value of static id is 2 Lets call the static funtions"<<endl;
    cout<<"for s1.dis():"<<endl;
    s1.dis();
    cout<<"for s2.dis():"<<endl;
    s2.dis();
    cout<<"for test::dis():"<<endl;
    student::dis();
}
