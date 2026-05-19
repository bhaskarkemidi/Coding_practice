/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[]={7,3,5,4,2,6};
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = 1; i < len; i++)
    {
        int key = a[i];
        int j = i-1;
        while ( j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    for (int i=0;i<len;i++)
    printf("%d\t",a[i]);
    return 0;
}
