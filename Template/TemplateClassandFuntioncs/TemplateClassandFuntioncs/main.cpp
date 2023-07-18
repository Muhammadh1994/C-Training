//
//  main.cpp
//  TemplateClassandFuntioncs
//
//  Created by Abdullah Juhaif on 7/17/23.
//

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
template<class T>
class Stack{
private:
    T *stk;
    int size;
    int top=-1;
public:
    Stack(int size=0);
    void push(T x);
    void pop();
    void dis();
};
template<class T>
Stack<T>::Stack(int size){
    this->size=size;
    stk=new T[size];
}
template<class T>
void Stack<T>::push(T x){
    if(top==size-1){
        throw StackOverFlow("The Size Has Exceeded",top,size);
    }
    top++;
    stk[top]=x;
}
template<class T>
void Stack<T>::dis(){
    for(int i=0; i<size;i++){
        cout<<stk[i]<<" ";
    }
}
int main(int argc, const char * argv[]) {
    Stack<int> s(5);
    Stack<string> t(5);
    try{
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        t.push("AB");
        t.push("BC");
        t.push("CD");
        t.push("DE");
        t.push("EF");
        t.push("FG");
    }catch(StackOverFlow e)
    {
        e.dis();
    }
    cout<<"The inserted elements\n";
    s.dis();
    cout<<endl;
    t.dis();
    cout<<endl;
}
