/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int atoi_fun(char *str)
{
     int sign = 1;
     int result = 0;
     if(*str == '-')
     {
         sign = -1;
         str++;
     }
     else if(*str == '+')
     {
         //sign = +1;
         str++;
     }
     while (*str >= '0' && *str <= '9')
     {
         result = result * 10 + (*str - '0');
         str++;
     }
    return result * sign;
}



int main()
{
   char str[]="-12345";
   int i = atoi_fun(str);
   printf("%d",i);
    return 0;
}


