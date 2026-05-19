/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <list>
using namespace std;
/*
Points to Remember about List Container
It is generally implemented using a dynamic doubly linked list with traversal in both directions.
Faster insert and delete operation as compared to arrays and vectors.
It provides only sequential access. Random Access to any middle element is not possible
It is defined as a template so it is able to hold any data type.
It operates as an unsorted list would, which implies that by default, the list’s order is not preserved.
However, there are techniques for sorting.
*/
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(3);
    l.push_back(4);
    l.pop_back();
    for (list<int> ::iterator i=l.begin();i!=l.end();i++)
    cout<<*i<<endl;
    cout<<"-----"<<endl;
    l.push_front(0);
    l.push_back(4);
    for (list<int> ::iterator i=l.begin();i!=l.end();i++)
    cout<<*i<<endl;
    cout<<"----"<<endl;
    list<int> k {12,13,14,15,16,17};
    k.reverse();
    for(list<int> ::iterator j = k.begin();j!=k.end();j++)
    cout<<*j<<endl;
    cout<<k.size()<<endl<<"---"<<endl;
    k.empty();
    //k.push_back(1);
    cout<<k.size();
    return 0;
}

