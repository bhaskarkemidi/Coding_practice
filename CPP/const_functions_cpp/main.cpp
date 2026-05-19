/*
1. const members functions are used to restrict modifictations of data members of its class inside class.
2. to make them accessible in const member functions, we have to make that data member as mutable.
*/
#include <iostream>

using namespace std;

class Base{
    //mutable int x=20;
    //int x =20;
    int y;
    public:
    Base(){}
   // Base(int a, int b):x{a},y{b}{}
    void setx(int a){
        x=a;
    }
    int getx() const {
        x = 30;
        return x;
    }
};

int main()
{
   Base b;
   b.setx(10);
   cout<<b.getx()<<endl;
    return 0;
}