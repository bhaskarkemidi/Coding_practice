#include <iostream>
using namespace std;
class Sample{
    int i;
    int j;
    public:
    Sample(int m, int n):i(m),j(n){}
    Sample(const Sample& s)
    {
        i = s.i;
        j = s.j;
    }
    void display()
    {
        cout<<"i value is: "<<i<<endl;
        cout<<"j Value is: "<<j<<endl;
    }
};

int main()
{
    Sample s1(23,45);
    Sample s2(s1);
    s1.display();
    s2.display();
    return 0;
}