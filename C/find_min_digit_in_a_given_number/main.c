/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n=985397;
    int r,min=n;

    while(n>0)
    {
        r=n%10;
        if(r<min)
        {
            min=r;
        }

        n=n/10;
    }
    printf("Min number is %d\n",min);
    return 0;
}
