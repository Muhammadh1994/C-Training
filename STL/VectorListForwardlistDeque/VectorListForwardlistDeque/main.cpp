//
//  main.cpp
//  VectorListForwardlistDeque
//
//  Created by Abdullah Juhaif on 8/2/23.
// Let us study about some STLs

#include <iostream>
#include<vector>
#include<list>
using namespace::std;
int main(int argc, const char * argv[]) {
    //You can see this looks like template classes,
    vector<int> v={1,2,3};
    list<int> l={1,2,3};
    for(int x:v){
        cout<<x<<endl;
    }
    // This does the job of push_front
    v.insert(v.begin(), 10);
    for(int x:v){
        cout<<x<<endl;
    }
    cout<<"Lets use the iterator"<<endl;
    // We can also make use of the iterator in the scope to do the following
    vector<int>::iterator itr;
    for (itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    v.push_back(200);
    for (itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    v.clear();
    cout<<"After v.clear(): "<<v.size()<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    l.push_front(0);
    cout<<"Lets print the list after l.push_front(0):"<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;
}
