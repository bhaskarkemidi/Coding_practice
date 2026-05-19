/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fun(int x, int y, int *sum, int *mul)
{
    if(sum == NULL || mul == NULL)
        return 0;

    *sum = x+y;
    *mul = x*y;
    return 1;
}
int main()
{
    int a = 10, b = 5, sum, mul;
    int status = fun(a,b,&sum,&mul);
    if(status == 1)
    printf("%d %d",sum,mul);
    else 
    printf("Something went wrong:");
    return 0;
}
