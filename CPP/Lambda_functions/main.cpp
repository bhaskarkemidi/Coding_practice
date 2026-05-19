/* What are C++ Lambdas??
The anonymous functions introduced in C++11 and furthur versions 14 and 17.
1. Whenever we have a function pointer then you can use lambda. Lambda is just a way for programmers
to define a function without literally to define a function.
2. Lambda with auto is introduced in C++ 14
*/
#include <iostream>
#include <complex>
#include <string>
using namespace std;

int main()
{
   auto add = [](auto x, auto y) { return x+y; }; //Lambda function for add function
   auto mul = [](auto x, auto y) { return x*y; }; //lambda function for mul function
   
   int a = 2, b = 3;
   
   string str1 = "Bhaskar", str2 = "Kemidy";
   
   cout << add(a,b) <<endl;
   
   cout << add(str1,str2) <<endl;
   
   cout << mul(a,b) << endl;
   
   //cout << mul(str1,str2) <<endl; will not work with string multiplication
   
    return 0;
}





