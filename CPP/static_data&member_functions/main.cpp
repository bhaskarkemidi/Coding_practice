/*
1. static data members (y) are the attributes of classes not of objects, where as the 
normal variables are attributes of objects not classes.
2. static data members are common for all objects, where as normal variables are creaeted for every object.
3. static data members are can be accessed using class name (Base::y), but normal variables are not.
4. static member functions can access only static data members of its class, if you try to access the normal 
members in static member functions it will throw error. but in normal member function you can access the both 
static and non-static data members.
5. we can call this static memeber functions using class name also, where as non-static memeberfunctions cannot call
using class name.
6. static memeber functions are class attributes, non-static memeber functions are object attributes.
7. 
*/
#include <iostream>

using namespace std;
class Base{
    public:
    int x;
    static int y;
    void printx(){
        cout<<x<<" "<<y<<endl;
    }
    static void printy(){
        cout<<y<<endl;
    }
};
int Base::y;

int main()
{
    Base b1;
    Base b2;
    b1.x = 20;  //accessing non-static data memeber using object name is allowed.
    //b1::x = 20; //accessing non-static data memeber using class name is not allowed
    b1.y = 30;  //accessing static data memeber using object is allowed.
    b1::y = 40; //accessing static data memeber using class name is allowed.
    b1.printx(); //accessing non-static memeber function using object name is allowed
    //Base::printx(); //calling non-static function using class (not allowed)
    Base::printy(); //calling static fun using class name
    b1.printy(); //calling static function using object
    
    return 0;
}