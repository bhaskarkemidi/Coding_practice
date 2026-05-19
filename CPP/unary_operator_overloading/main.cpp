/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Weight {
    private:
    int kg;
    public:
    Weight():kg(0){}
    Weight(int x):kg(x){}
void printWeight()
{
    cout<<"Weight in Kg: "<<kg<<endl;
}
void operator ++()
{
    ++kg;
}
void operator ++(int)
{
    kg++;
}
void operator --()
{
    --kg;
}
void operator --(int)
{
    kg--;
}
};

int main()
{
    Weight obj;
    obj.printWeight();
    ++obj;    //obj.operator ++()
    obj.printWeight();
    obj++;
    obj.printWeight();
    --obj;
    obj.printWeight();
    obj--;
    obj.printWeight();
    return 0;
}
