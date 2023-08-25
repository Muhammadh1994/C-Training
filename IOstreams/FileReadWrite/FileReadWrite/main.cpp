//
//  main.cpp
//  FileReadWrite
//
//  Created by Abdullah Juhaif on 7/22/23.
//

#include <iostream>
#include <fstream>
using namespace::std;
class MyType{
//GIving the data as public as we dont have to wite extra lines of code to assign them as out purpose is to understand fstream
public:
    string Name;
    int rollNo;
    string Department;
    friend ofstream &operator<<(ofstream &o,MyType &m);
    friend ifstream &operator>>(ifstream &i,MyType &m);
};
ofstream &operator<<(ofstream &o,MyType &m){
    o<<m.Name<<endl;
    o<<m.rollNo<<endl;
    o<<m.Department<<endl;
    return o;
}
ifstream &operator>>(ifstream &i,MyType &m){
    i>>m.Name;
    i>>m.rollNo;
    i>>m.Department;
    return i;
}
int main(int argc, const char * argv[]) {
    ofstream ofs("newFile.txt");
    // This writes toa file
    ofs<<"Jhon"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;
    //Cle the above file
    ofs.close();
    ifstream ifs;
    ifs.open("newFile.txt");
    //To read a file we need to know the content of the file This is where streamlining is useful ie, reading a class(user defined data). But let us see how to read a file before we go there, We know the newFile.txt contains texts a string int and then a string
    string name;
    int rollNo;
    string department;
    // Though it will read the variable in order of line we have the rish of putting an int to a string or vice verca
    ifs>>name>>rollNo>>department;
    cout<<"Name: "<<name<<"\nRoll Number: "<<rollNo<<"\nDepartment: "<<department<<endl;
    
    // Let us see stramlining and Where we do not need to know the data type just the class will help us
    MyType s;
    ofstream classOFS("classfile.txt");
    s.Name="rahul";
    s.rollNo=22;
    s.Department="mech";
    cout<<"The S object values is "<<endl<<s.Name<<endl<<s.rollNo<<endl<<s.Department<<endl;
    classOFS<<s.Name<<endl<<s.rollNo<<endl<<s.Department<<endl;
    classOFS.close();
    ifstream classIFS;
    MyType s1;
    classIFS.open("classfile.txt");
    // Here we are from the file and assigning it to s1 as you can see we are not declaring it seperately
    classIFS>>s1.Name>>s1.rollNo>>s1.Department;
    classIFS.close();
    cout<<"The S1 object values is "<<endl<<s1.Name<<endl<<s1.rollNo<<endl<<s1.Department<<endl;
    
    // But in the above way by using class we do not need to know about the data types in the class but still we need to be aware of the class as in what all is there in the class, so if the end user will find this difficult hence we can do an insertion Operation overloading for the above
    MyType s2;
    ofstream overloadingOFS("inheritOFS.txt");
    s2.Name="Jerome";
    s2.rollNo=23;
    s2.Department="IT";
    // See the difference from line 50 to this
    cout<<"The S2 object values is "<<endl<<s2.Name<<endl<<s2.rollNo<<endl<<s2.Department<<endl;
    overloadingOFS<<s2;
    overloadingOFS.close();
    // Now lets read from this file
    MyType s3;
    ifstream overloadingIFS;
    overloadingIFS.open("inheritOFS.txt");
    //Here we are reading from the file and assigning to it, where the neduser does not have to have to knowledge of the Class as we are overloading in the class to assign
    overloadingIFS>>s3;
    cout<<"The S3 object values is "<<endl<<s3.Name<<endl<<s3.rollNo<<endl<<s3.Department<<endl;
    return 0;
}
