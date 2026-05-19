#include <iostream>
using namespace std;

int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d",&num);
   int sum = 0, rem, base = 10;
   while (num > 0)
   {
       rem = num % 10;
       sum = rem + sum * base;
       num /= 10;
   }
   printf("%d", sum);
   return 0;
}