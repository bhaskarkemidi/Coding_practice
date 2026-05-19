#include<iostream>
using namespace std;

struct cpp_struct{
    private:
    int a;
    char name[10];
    public:
    void fun();
    cpp_struct(){
        a=20;
       cout <<"struct cnstrctr "<<a<<endl ;
    }
    cpp_struct(int a, int b)
    {
        int d=10;
        cout <<"param cnstrctr "<<a<<b<<endl;
    }
    cpp_struct(cpp_struct &c)
    {
        a=a+c.a;
        cout<<"cpy cnstrtr "<<a<<endl;
    }
    
};
void cpp_struct::fun(void)
{
    cout <<"cpp struct is called";
    
}
//typedef struct cpp_struct 
int main()
{
    struct cpp_struct myown;
    struct cpp_struct myown2(2,3);
    struct cpp_struct myown3(myown2);
    myown.fun();
    return 0;
}
