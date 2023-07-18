//
//  main.cpp
//  InheritanceWays
//
//  Created by Abdullah Juhaif on 7/11/23.
//
// This is a simple document showing the different ways of in heritance we are aware that the a protected and public can only be accessed by an inheritng class and only public can be accessed by an object Let us see how this affects in inheritance
#include <iostream>
using namespace::std;
class first{
private:
    int a;
protected:
    int b;
public:
    int c;
    void func(){
        a=10;
        b=10;
        c=10;
    }
};
// The second class inherits first class by public which means privat->private;protected->protected;public->public, We can also say anything below public is considered as public
class second:public first{
    void testfunc(){
        //As we know the a os private of a it is not accesible
        //a=10;
        // B is protected of first so it is accessible
        //c is public
        b=10;
        c=10;
    }
    
};
// The second class inherits first class by protected which means privat->private;protected->protected;public->protected, We can also say anything below protected is considered as protected
class third:protected first{
    void testfunc2(){
        //As we know the a os private of a it is not accesible
        //a=10;
        // B is protected of first so it is accessible
        //c is public
        b=10;
        c=10;
    }
};
class fourth:private first{
    void testfunc3(){
        //As we know the a os private of a it is not accesible
        //a=10;
        // B is protected of first so it is accessible
        //c is public
        b=10;
        c=10;
    }
};
// Here we can see the class four inherited privately from first which puts all members into private of fourth and not fifth is publicly inheriting fourth so all the variables are private
class fifth:public fourth{
    void testfunc4(){
        //As we know the a os private of a it is not accesible
        //a=10;
        // b is privtae of first so it is accessible
        //c is private as well
        //b=10;
        //c=10;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    first var;
    //This is not possible as it is a private member of first
    //var.a=10;
    //This is not possible as it is a protecterd member first
    //var.b=10;
    //This is possible as c is public first
    var.c=10;
    second var2;
    //This is not possible as it is a private member of first and is inherited publicly by second which means its a private->private
    //var2.a=10;
    //This is not possible as it is a protecterd member first and is inherited publicly by second which means its a protected->protected
    //var2.b=10;
    //This is possible as c is public first and is inherited publicly by second which means its a public->public
    var2.c=10;
    third var3;
    //The first two examples show protected and private hence we are not using it again, here as the class is in herited by protected all public variables of class first is protected in class third Hence not accessible directly by object
    //var3.c=10;
    fourth var4;
    // Similar to the above example here the fourth class is in herited private hence all the memebers of the class are private
    //var4.c=10;
    return 0;
}
