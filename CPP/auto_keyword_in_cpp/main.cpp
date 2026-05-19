/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//auto keyword is used for type deduction
#include <iostream>
#include<typeinfo>
using namespace std;
class Base {};
int main()
{
    auto x = 20;      // int x = 20;
    auto y = 20.5;    // double y = 20.5;
    auto b = new Base(); //Base *b = new Base()
    
    cout << typeid(x).name() << endl; // o/p: i (int)
    cout << typeid(y).name() << endl; //o/p: d (double)
    cout << typeid(b).name() << endl; //o/p: P4Base (pointer for base)
    
    return 0;
}