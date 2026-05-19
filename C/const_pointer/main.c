//POINTERS 
/*
1. poniter to const data
2. const pointer to data
3. const pointer to const data
*/

#include <stdio.h>

int main()
{
//1. const ponter to normal integer, here we cant chage the poniter,
    int x = 10, y = 20;
    int  *const p = &x;
    printf("%d\n",*p);
    //p=&y;  //Error code
    x = 30; //can be allowed
    printf("%d\n",*p);

//2. pointer to const integer, here we cant change the value 
    const int a = 40;
    int b = 50;
    int *ptr = &a;
    printf("%d\n",*ptr);
    ptr = &b; //can be allowed
    //a = 20; //error code
    printf("%d\n",*ptr);
    
//3. const pointer to const integer
   const int c = 60;
   int d = 70;
   int *const ptr1=&c;
   //ptr1 = &d; //error code
   //c = 60; //error code
   printf("%d\n",*ptr1);
    
    return 0;
}
