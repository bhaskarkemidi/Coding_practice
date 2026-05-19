/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<cstring>
using namespace std;
class String
{
    char *name;
    int length;
    public:
    String(){
        length = 0;
        name = new char[length + 1];
    }
    String(char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name,s);
    }
    void display(void)
    {
        cout << name <<endl;
    }
    void join(String &a, String &b);
};
void String :: join(String &a, String &b)
{
    length = a.length + b.length;
    delete name;
    name =  new char[length+1];
    strcpy(name, a.name);
    strcat(name,b.name);
};

int main()
{
    char *first = "Joseph ";
    String name1(first), name2("Louis"),name3 ("Lagrange"),s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    
    return 0;
}