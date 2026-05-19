/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
class book {
    string author;
public:
    book(string author)
    {
        this->author = author;
        cout<<"Book Author was : "<<author<<"\n";
    }
    book(book& obj)
  {
    author = obj.author;
    cout << "In copy constructor Book Author was : "<< author << "\n";
  };
    
};

int main()
{
    
    book obj1("A.V.Thomas"); //static storage object with parameter
    
    
    book* obj2= new book("A.V.R.S.Stefen"); // dynamic storage object with parameter
    
    book obj3(obj1); // copy constructor //static way
    //we can also use    book obj3 = obj1;
 
    book* obj4 = new book(*obj2); // copy constructor //dynamic way
    
 
    delete obj2;
    delete obj4;//  deleting dynamic storage object
 
    return 0;
}
