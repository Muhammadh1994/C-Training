//
//  main.cpp
//  LambdaExpression
//
//  Created by Abdullah Juhaif on 8/14/23.
// the format of lambda function
// [capture_list](parameter_list)->returntype{body};

#include <iostream>
using namespace std;
template<class P>
void func(P f){
    int a;
    a=f(10,20);
    cout<<"The sum from the passed function is "<<a<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"Lets understand about lambda functions\nLet us write a lambda function without any capture list or parameters \n[](){cout<<\"Hello\"}()=";
    [](){cout<<"Hello"<<endl;}();
    cout<<"Let us write a lambda function which takes in parameters\n[](int x,int y){cout<<x<<\" \"<<y;}(10,5)=";
    [](int x,int y){cout<<x<<" "<<y<<endl;}(10,5);
    cout<<"Let us add a return type \nauto a=[](int x,int y)->int{return x+y;}(10,5)=";
    auto a=[](int x,int y)->int{return x+y;}(10,5);
    cout<<a<<endl;
    cout<<"The above expression [](int x,int y)->int{return x+y;}(10,5)= can be assined to a function auto f=[](int x,int y)->int{return x+y;}\nauto b=f(10,5)=";
    auto f=[](int x,int y)->int{return x+y;};
    auto b=f(10,5);
    cout<<b<<endl;
    // We are passing a function inside another function
    func(f);
}
