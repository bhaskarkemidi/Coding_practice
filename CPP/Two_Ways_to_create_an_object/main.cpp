/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
class book {
    int pages;
 
public:
    void set(int pages)
    {
        this->pages = pages;
        cout << "No. of pages in the book are "<< pages << "\n";
    }
};


int main()
{
    //static way to create object
    book obj1; //static storage object
    obj1.set(200); //to access the functions in class

    //Dynamic way to create an object
    book* obj2 = new book(); // dynamic storage object
    obj2->set(400); //to access the functions in class
 
    delete obj2;//  deleting dynamic storage object
 
    return 0;
}