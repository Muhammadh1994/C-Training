//
//  main.cpp
//  ExceptionHandlingStudentExcercise
//
//  Created by Abdullah Juhaif on 7/16/23.
// Lets us create a stack class and see how to handle exceptions

#include <iostream>
using namespace std;
class StackOverFlow:exception{
private:
    string msg;
    int top;
    int size;
public:
    StackOverFlow(string msg="0",int top=0,int size=0);
    void dis();
};
StackOverFlow::StackOverFlow(string msg,int top,int size){
    this->msg=msg;
    this->top=top;
    this->size=size;
}
void StackOverFlow::dis(){
    cout<<msg<<" as the stack size is "<<size<<" and you are trying to insert "<<top+2<<endl;
}
class StackUnderFlow:exception{};

class Stack{
private:
    int *stk;
    int size;
    int top=-1;
public:
    Stack(int size=0);
    void push(int x);
    void pop();
    void dis();
};
Stack::Stack(int size){
    this->size=size;
    stk=new int[size];
}
void Stack::push(int x){
    if(top==size-1){
        throw StackOverFlow("The Size Has Exceeded",top,size);
    }
    top++;
    stk[top]=x;
}
void Stack::dis(){
    for(int i=0; i<size;i++){
        cout<<stk[i]<<" ";
    }
}
int main(int argc, const char * argv[]) {
    Stack s(5);
    try{
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);
    }catch(StackOverFlow e)
    {
        e.dis();
    }
    cout<<"The inserted elements\n";
    s.dis();
    cout<<endl;
}
