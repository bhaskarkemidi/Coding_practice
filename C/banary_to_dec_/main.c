#include <stdio.h>

int main()
{
    int n = 111;
    
    int rem = 0, sum = 0, base = 1;
    
    while ( n > 0)
    {
        rem = n % 10;
        sum = sum + rem * base;
        base *= 2;
        n /= 10;
    }
    printf ("dec mumber is %d\n", sum);
    
    return 0;
}

