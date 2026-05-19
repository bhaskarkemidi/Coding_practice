
#include <iostream>
#include <cstring>
using namespace std;
class Stu{
    char name[20];
    char course[20];
    public:
    Stu(){}
    Stu(char name[20], char course[20]){
        strcpy(this->name,name);
        strcpy(this->name,name);
    }
    void showstu()
    {
        cout<<name<<" "<<course<<endl;
    }
};
class Marks : public Stu{
    int m,p,c;
    public:
    Marks(char name[20], char course[20], int m, int p, int c)
    {
        Stu::Stu(name, course);
        this->m = m;
        this->p = p;
        this->c = c;
    }
    void showmarks()
    {
        cout<<m<<p<<c<<endl;
    }
};
int main()
{
    Marks m("Josh","MPC",70,87,98);
    m.showstu();
    m.showmarks();
    return 0;
}