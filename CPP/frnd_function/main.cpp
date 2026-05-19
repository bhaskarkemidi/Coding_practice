/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class fun{
    public:
    fun():i(0){}
  private:
   int i;
   friend void frnd_fun(fun &fn);
};
void frnd_fun(fun &fn)
{
    fn.i=99;
    cout<<fn.i<<endl;
    
}
int main()
{
    fun obj;
    frnd_fun(obj);
    return 0;
}