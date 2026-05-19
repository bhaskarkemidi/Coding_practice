/*
There is a method with the same name in the parent class.
The method in the parent class is declared as “virtual” which means it was intended to be rewritten.
The method in the parent class has the same signature as the method in the subclass.
*/
#include <iostream>

using namespace std;
class Base{
    int b_var;
    public:
     void fun(){
        cout<<"base class"<<endl;
    }
};
class Derived:public Base 
{
    int d_var;
    public:
     // void fun(int ) override   -> this will give error bc signature mismatch from base class fun.
     void fun() //override
      {
          cout<<"Derived class"<<endl;
      }
};
int main()
{
   Base *bptr=new Derived();
   bptr->fun();
    return 0;
}



