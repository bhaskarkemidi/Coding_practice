/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//It performs implicit conversion between types
//using normal c style implicit conversion is very hard to find, where code is failing, for that we 
//can use static_cast keyword to search easily.
//static_cast will happen at compile time, not at runtime.
#include <iostream>

using namespace std;
class Int {
    int x;
    public:
        Int (int x=0):x{x}{
            cout<<"Conversion constructor" << endl;
        }
        operator string (){
            cout<<"Conversion operator" << endl;
            return to_string(x);
        }
};

class Base {};
class Derived : private Base{};
int main()
{
   //////////1 Point ////////////
   float f = 3.5;
   int a;
   //a=f;  // C-Style cast ,but in large code we will not undrstnd where the casting is occur
   a = static_cast<int>(f); //cpp style(static_cast) 
   cout<<a<<endl;
   
   //////////2 Point///////////
   /* Use static_cast when conversion betweentype is provided 
   through conversion operator or conversion constructor, if the reviewer looking your code after 
   10 years, they will confuse what is happening, and it will be really easy in debugging part- by using static_cast keyword*/
   
   Int obj(3);
   string str1 = obj;
   obj = 20; 
   
   string str2 = static_cast<string>(obj);
   obj = static_cast<Int>(30);
   
   /////////////3 point //////////////////
   /* static_cast is more restrictive than C-Style
    Ex: char * to int * is allowed in C-Style but not with static_cast. */
    char c;
    int *p = (int *)&c;
    *p = 5;  //PASS at compile-time but FAIL at run time. (thats why it is dangerous)
    int* ip = static_cast<int*>(&c); //FAIL //compile-time error, bc not compatible pointer types
     //////////////////
    ///////4 point
    Derived d1;
    Base *bp1 = (Base*)&d1;  //Allowed at compile time
    Base *bp2 = static_cast<Base*>(&d1); //Not allowed at compile time
    return 0;
    
}