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
    for (int i = 0; i < (len-1); i++)
    {
    for(int j=0;j<len-1-i;++j)
    {
        if(a[i]>a[j+1])
        {
            int temp = a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        
        }
    }
    }
    for (int i=0;i<len;i++)
    printf("%d\t",a[i]);
    return 0;
}
