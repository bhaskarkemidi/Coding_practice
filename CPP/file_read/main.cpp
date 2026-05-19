/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;
class student {
    int id;
    char name[20];
    public:
    void put_fun()
    {
        cout<<name<<"\t"<<id<<endl;
    }
};
int main()
{
    student s;
    ifstream file("myfile.txt",ios::in);
    file.read((char *)&s,sizeof(s));
    while(!file.eof())
    {
        s.put_fun();
        file.read((char *)&s,sizeof(s));
    }
    file.close();
    return 0;
}