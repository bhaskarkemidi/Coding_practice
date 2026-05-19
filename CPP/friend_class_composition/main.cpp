/*
1. composition using friend class concept.
2. creating a one class object in another friend class is called composition.
*/
#include <iostream>

using namespace std;

class author{
  char aname[20];
  public:
 friend class book;
};
class book{
  char bname[20];
  float price;
  public:
  author a; //creating class author object in friend class.(not in main) is called "composition";
  void getData()
  {
    cout<<"Enter author name: "<<endl;
    cin>>a.aname;
    cout<<"Enter book name: "<<endl;
    cin>>bname;
    cout<<"Enter price: "<<endl;
    cin>>price;
  }
  void putData()
  {
      cout<<"author name: "<<a.aname<<endl;
      cout<<"book name: "<<bname<<endl;
      cout<<"book price: "<<price<<endl;
      
  }
  
};
int main()
{
    book b; //here we no need to create object for class author, bc class author obj is created in class book (at line 18)
    b.getData();
    b.putData();
    return 0;
}