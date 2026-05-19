/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class A{
    public:
    void printMessage(){
        cout<<"Class A print message function: "<<endl;
    }
};
class B{
    public:
    void printMessage(){
        cout<<"Class B print message function: "<<endl;
    }
};
class AB : public A, public B {
    public:
    void printMessage()
    {
        cout<<"Class AB print message: "<<endl;
    }
};
int main()
{
   AB obj;
   obj.printMessage();
    return 0;
}