/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class BC 
{
    public:
       int b;
       void show()
       {
           cout << "b = " << b <<endl;
       }
};
class DC : public BC
{
    public:
        int d;
        void show()
        {
            cout << "b = " << b <<endl;
            cout << "d = " << d <<endl;
        }
};

int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    bptr->b = 100;
    cout << "bptr points to base object "<<endl;
    bptr->show();
    DC derived;
    bptr = &derived;
    bptr -> b = 200;
    cout << "bptr now points to derived object"<<endl;
    bptr -> show();
    DC *dptr;
    dptr = &derived;
    dptr -> d = 300;
    cout << "dptr is derived type ponter"<<endl;
    dptr -> show();
    cout << "using ((DC *)bptr"<<endl;
    ((DC *)bptr) -> d = 400;
    ((DC *)bptr) -> show();
    
    return 0;
}