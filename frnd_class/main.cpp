/*
1. friend classes can be used for re-usability. or composition.
2. it only allows re-usuability,but never allowed extensibility.


*/
#include <iostream>
using namespace std;
class Test1{
  int a,b;
  public:
  friend class Test2;
  void getData(){
      cout<<"Enter data"<<endl;
      cin>>a>>b;
  }
};
class Test2{
  public:
  void putData(Test1 t)
  {
      cout<<"a is : "<<t.a<<endl;
      cout<<"b is : "<<t.b<<endl;
  }
};
int main()
{
    Test1 t1;
    Test2 t2;
    t1.getData();
    t2.putData(t1);
    return 0;
}
