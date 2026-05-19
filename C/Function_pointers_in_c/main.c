/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef int I;
typedef const int CI;
I add(I a, I b){ return a+b; }
I sub(I a, I b){ return a-b; }
I mul(I a, I b){ return a*b; }
int main()
{
    I (*fp[3])(I,I)={add,sub,mul};
    CI i=20,j=10;
    for(I l=0;l<3;l++)
    printf("%d\n",fp[l](i,j));
    return 0;
}

