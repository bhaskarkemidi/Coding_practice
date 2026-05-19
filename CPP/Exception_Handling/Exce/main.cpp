/* EXCEPTION HANDLING
The process of converting system error messages into user friendly message is called exception handling.
It is an event which occurs during execution of the program, that disrupts the normal flow of the prgrm instruction.
Errors classified into two types:
1. Compiletime errors: error caught at compile time.
    Ex: library ref, syntax error, incorrect class inport.
2. Runtime errors: an exception caught during runtime.
it creates serious issues.
Ex: a number divides by zero (compiles successfully, but throw an exception). (x/0);Due to this, application will
crash, so to avoid this exception handling came into picture.

Exception Handling Mechanisms:
1. Find the problem.(hit the exception)
2. Inform about its occurance.(throw the exception)
3. Receive error information.(catch the exception)
4. Take proper action.(handle the exception)

C++ Error Handling keywords.
1. try
2. catch
3. throw
*/
#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 1, c;
    try{
        if(b == 1)
        throw b;
        c = a/b;
    }
    catch(int b)
    {
    cout<<b;
    }
    return 0;
}