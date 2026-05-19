/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    while (1)
    {
    printf("Enter decimal value: ");
    scanf ("%d",&n);
    int rem =0, sum = 0, base = 1;
    while ( n > 0)
    {
        rem = n % 2;
        sum = sum + rem*base ;
        base *= 10;
        n /= 2;
    }
    printf("binary form is %d\n",sum);
    }
    return 0;
}
