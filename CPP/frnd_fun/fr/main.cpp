/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    point(const point &p)
    {
        x = p.x + 2;
        y = p.y + 3;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};
int main()
{
    point p1(10,5);
    point p2 = p1;
    
    cout<<p1.getx()<<" ";
    cout<<p1.gety()<<endl;
    cout<<p2.getx()<<" ";
    cout<<p2.gety();
    cout<<p1.getx()<<" ";
    cout<<p1.gety()<<endl;
    
    return 0;
    
}