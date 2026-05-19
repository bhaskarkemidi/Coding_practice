/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
template <typename T, typename U, typename V>
T add(T x, U y, V z)
{
    return (x+y+z);
}
int main()
{
    cout<<add<int,float,double>(2,4.6,5.80099)<<endl;
    //cout<<add<float>(2.3,4.5)<<endl;
    //cout<<add<double>(3.5798383,4.9887593)<<endl;
    return 0;
}