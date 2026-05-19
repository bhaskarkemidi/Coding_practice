/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct student {
    int num;
    char name[2];
    float marks;
} __attribute__((packed));
int main()
{
    struct student stu1;
    struct student *p=NULL;
    p=&stu1;
    int size = (char *)(p+1)-(char *)(p);
    printf("%d",size);
    return 0;
}

