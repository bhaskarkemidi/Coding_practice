/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
class Student{
    int id;
    char name[20];
    public:
      void get_fun()
      {
          cout<<"enter Id: ";
          cin>>id;
          cout<<"Enter name: ";
          cin>>name;
      }
      void put_fun()
      {
          cout<<"name is:"<<name<<endl;
          cout<<"id is: "<<id<<endl;
      }
};

int main()
{
Student st1;
//We can open a file in two ways, i> is using copy constructor ii> is using open() function 

ofstream file("myfile.txt"); //opeining a file using copy condtructor method, in this we have to pass the file name as parameter
//ofstream obj2;
//obj2.open("myfile.txt"); //opening a file using open() function
char op;
do{
    st1.get_fun();
    file.write((char *)&st1, sizeof(st1));
    cout<<"one row is created:"<<endl;
    cout<<"Any more students: [y]/[n]:"<<endl;
    cin>>op;
}while(op == 'Y' || op == 'y');
file.close();
return 0;
}