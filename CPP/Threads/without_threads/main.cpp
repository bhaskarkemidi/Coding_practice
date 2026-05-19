/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <thread>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;
ull OddSum = 0;
ull EvenSum = 0;
void findEven(ull start, ull end){
    for (ull i=start;i<=end;++i)
    {
        if ((i & 1) == 0 )
        EvenSum += i;
    }
}
void findOdd(ull start, ull end){
    for (ull i=start;i<=end;++i)
    {
        if ((i & 1 )== 1 )
        OddSum += i;
    }
}
    

int main()
{
    ull start = 0, end = 1900000000;
    
    auto start_time = high_resolution_clock::now();
    
    findEven(start,end);
    findOdd(start,end);
    
    auto stop_time = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop_time - start_time);
    
    cout <<"Even Sum: "<<EvenSum<<endl;
    cout<<"Even Odd: "<<OddSum<<endl;
    
    cout<<"Sec: "<<duration.count()/1000000<<endl;
    
    return 0;
}
