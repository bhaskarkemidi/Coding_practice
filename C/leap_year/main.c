#include<stdio.h>  
#include<conio.h>  
void print_leap_years(int year1, int year2)
{
    int count =0 ;
   for (int i = year1; i<=year2; i = year1++)
    {
    if((year1%4==0) && ((year1%400==0) || (year1%100 != 0)))
      {  
        printf("%d is a leap year", year1); 
        printf("\n");
        count++;
        
      } 
      else {  
        //printf("%d is not a leap year", year1);  
        continue;
         }  
    }
    printf ("%d", count);
}
void main() {  
    int s_year;  
    int e_year;
    printf("Enter range: ");
    scanf("%d %d",&s_year,&e_year);
    print_leap_years(s_year,e_year);
}  
