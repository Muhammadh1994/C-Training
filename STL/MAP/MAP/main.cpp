//
//  main.cpp
//  MAP
//
//  Created by Abdullah Juhaif on 8/5/23.
//

#include <iostream>
#include<map>
using namespace::std;
using IntStrMap = map<int,string>;
int main(int argc, const char * argv[]) {
    // insert code here...
    IntStrMap m;
    m.insert(pair<int,string>(1,"Abdullah"));
    m.insert(pair<int,string>(2,"Rajan"));
    m.insert(pair<int,string>(13,"Raju"));
    //Becasue map unlike other stls has pair sothe iterastor need to derefereced through a metod hence we will use ->
    IntStrMap::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<"Lets pull only the value of the secod key"<<endl;
    IntStrMap::iterator itr1;
    itr1=m.find(2);
    cout<<itr1->first<<" "<<itr1->second<<endl;
}
