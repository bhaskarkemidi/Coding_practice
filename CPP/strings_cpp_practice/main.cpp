/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;

void StringSearch(string s[], int len)
{
    int len_ss[len];
    for(int l = 0; l < len; l++)
    {
        len_ss[l]=s[l].length();
    }
    
      int count = 0;
      
      for(int n = 0; n < len; n++)
      {
          for(int m = 0; m < len_ss[n]; m++)
          {
          
            if((s[n].at(m) == '0') && (s[n].at(m+1) == '0'))
            {
                count++;
            }
            if(n < len-1)
            {
                if(((s[n].at(m) == '0') && (s[n+1].at(m) == '0')))
                {
                    count++;
                }
            }
          }
      }
          cout<<"count: "<<count<<endl;
}


int main()
{   
    string s[] = {"1001","1001","1001","1101"};   
    int size = sizeof(s);
    const int len = sizeof(s)/sizeof(s[0]);
    StringSearch(s, len);
    return 0;
}