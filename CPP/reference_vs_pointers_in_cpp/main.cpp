/*
1. Memory address (refernces have same address, whenre as pointer has differenct addresses)
2. re-assignment is not possible in refrences.
*/
#include <iostream>

using namespace std;

int main()
{
// 1. memory address
    int a = 10;
    int &r = a; //reference to a
    cout <<&r<<'\t'<<&a<<endl; //both a and r stores in same addresses
    
    int b = 20;
    int *p = &b; //pointer to b
    cout <<&p<<'\t'<<&b<<endl; //both p and b stores diff addresses
// 2. re-assignment 
    int c = 30;
    r = c;
    int &d = a;
    cout<<r<<'\t'<<a<<'\t'<<d<<endl;
    return 0;
// 3. NULL
   int d = 40;
   int &e; //cannnot have empty, at the time creation only you have to assign 
   int &e = NULL; // can not have NULL references.
   
//4. Atithmetic operations are not provided for references.
    p++; //pointer arithmetic is allowed
    r++;// can not be done, throwu error // .you can use (&r)++ 
//5. Indirection (only one level of indirection is allowed with refrences, with pointers we can have n level)
   int **ptr=&p;
   int ***ptr1 = &ptr;
   int &r1 = r;//only one level of indirection is allowed with references
}
