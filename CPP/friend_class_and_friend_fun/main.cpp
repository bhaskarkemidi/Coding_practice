/* friend functions
1. private data member of a class, can be only accessed by its member functions.
2. A function is a non-member function, but which can access the private data of its class.
3. friend functions can be declared at any section (public, protected, and private), because 
its a non member functions.
4. friend function declaration should be conducted within the class with friend keyword.
5. friend function should be defined outside the class without friend keyword.
6. We can introduce friend function to any number of functions
7. private data of class can not be accessed outside right, thats why friend functions have 
objects as arguements. using this obj we can get the data members.
8. friend functions will be invoked like normal funcitons
*/
#include <iostream>
using namespace std;
class B;
class C;
class A{
  int i;
  public:
  friend void fun(A a, B b, C c);
};
class B{
    int j;
    public:
    friend void fun(A a, B b, C c);
};
class C{
    int k;
    public:
    friend void fun(A a, B b, C c);
};
void fun(A a, B b, C c)//,B b,C c)
{
    a.i=5;
   b.j=6;
   c.k=7;
    cout<<"i value is: "<<a.i<<endl<<b.j<<endl<<c.k<<endl;
}

int main()
{
    A a;
    B b;
    C c;
    fun(a,b,c);
    //fun(b);
    return 0;
}