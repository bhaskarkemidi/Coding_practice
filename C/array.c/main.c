/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fun(int n,int m);
int main()
{
   int num, ch;
   printf("Enter a decimal number: ");
   scanf("%d",&num);
   printf("1.Binary\n2.Octal\n3.HexaDecimal\n");
   printf("Enter your chaoice: ");
   scanf("%d",&ch);
   
   switch(ch)
   {
       case 1: 
                printf("Binary Equivalent is : ");
                fun(num,2);
                break;
        case 2:
                printf("Octal Equivalent is : ");
                fun(num,8);
                break;
        case 3:
                printf("Hexadecimal Equivalent is : ");
                fun(num,16);
                break;
   }
   printf("\n");
   return 0;
}
void fun(int num, int b)
{
    int i=0, j, rem;
    char arr[20];
    while(num > 0)
    {
        rem =num%b;
        num/=b;
        if(num>9 && num<16)
            arr[i++]=rem-10+'A';
        else
            arr[i++]=rem+'0';
    }
    for(j=i-1;j>=0;j--)
    printf("%c",arr[j]);
}
        