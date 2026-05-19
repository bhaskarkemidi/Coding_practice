/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[] = "  A BB   CC   DD    FFFFFF ";
    int cnt=0;
    int len = strlen(str);
    for ( int i =0 ; i < len ; i++)
    {
        //if(( str[i+1] == ' ' || str[i+1]=='\0') && (str[i] >= 'A' && str[i] <= 'Z'))
        //cnt++;
        
        if( str[i] == ' ')
        {
            if(str[i+1] == ' ')
            continue;
            cnt++;
        }
        
        
    }
    printf("%d",cnt);
    return 0;
}

