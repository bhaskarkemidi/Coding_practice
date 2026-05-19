/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
 class Complex{
    private:
    int real, imag;
    public:
    Complex():real(0),imag(0){}
    Complex(int r,int i):real(r),imag(i){}
    void print(){
     cout<<real<<"+"<<imag<<"i"<<endl;   
    }
    //operator overloading

    Complex operator + (Complex C)
    {
        Complex temp;
        temp.real=real+C.real;
        temp.imag = imag + C.imag;
        return temp;
    }
};
int main()
{
  Complex C1(5,4);
  Complex C2(4,3);
  Complex C3;
  C3.print();
  C3=C1+C2;//C3=C1.add(C2);
  C3.print();
    return 0;
}