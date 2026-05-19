#include <stdio.h>
int main()
{
//check given bit is set or not
    int n = 13 ,pos = 1;
    int mask = 1 << (pos - 1); 
    if (n & mask) 
    printf("set");
    else
    printf("no");
    
//set the ith bit of a number
    n = 13 , pos = 2;
    mask = 1 << (pos - 1);
    n = n | mask;
    printf("\n%d\n",n);

//clear the ith bit of a number
    n = 15, pos = 2;              
    mask = 1 << (pos - 1);  //0100 1011
    mask = ~mask;
    n = n & mask;
    printf ("%d\n", n);
    
//Find whether a number is even or odd
    n = 1023;
    if (n&1)
    printf("odd\n");
    else
    printf("Even\n");
    int c = (n >> 1) << 1;
    if ( n == c )
    printf("Even\n");
    else
    printf("Odd\n");

//check whether given number is power of 2 
   n = 17;
   if( n & (n - 1))
   printf("Not\n");
   else
   printf("Yes\n");
    
//Toggling ith bit in a number
    n = 8 , pos = 1;
    mask = 1 << (pos - 1);
    n = n ^ mask;
    printf ("%d",n);
    return 0;
    
}

