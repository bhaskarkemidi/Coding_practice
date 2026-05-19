/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Book{
    string author;
    public:
    Book(string author){
        this->author = author;
    }
    Book(Book& obj4)
    {
        author=obj4.author;
        cout<<"author: "<<author<<endl;
    }
};
int main()
{
    //static way
   Book obj("Bjarne Strotuop");
   Book obj1(obj);
   
   //Dynamic way
   Book *ptr = new Book("Dennis Ritchie");
   Book *ptr1 = new Book(*ptr);
   
   delete ptr;
   delete ptr1;
   
    return 0;
}