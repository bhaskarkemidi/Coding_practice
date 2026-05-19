
#include <iostream>

using namespace std;
class Sample{
int a,b;
public:
  Sample(){
      cout<<"Defalult constructor called"<<endl;
  };
  Sample(int x, int y)
  {
      a=x;
      b=y;
      cout<<" param members initilaised : "<<a<<" "<<b<<" "<<endl;
  }
  Sample(Sample &s)
  {
      cout<<" copy cnstrctr : "<<s.a<<" "<<s.b<<" "<<endl;
  }
};
int main()
{
    Sample s1,s2(2,3),s3(4,5);
    Sample s4=s2;
    
    return 0;
}

