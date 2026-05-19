/*
1. In every application there is a default thread which is main(),inside this we create other threads.
2. A Thread is also known as lightweight process. Idea to achieve parallelism by dividing a process into 
multiple threads.
For ex:
    (a) The browser has multiple tabs that can be a different threads.
    (b) MS Word must be using multiple threads, one thread to format the text, another to process inputs
    (spell checker)
    (c) Visual Studio code editor would be using threading for auto completing the code. (Intellicense)
//Ways to create threads in c++11
1. Function pointers
2. Lambda functions
3. Functors
4. Member functions
5. Static member functions
*/
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
    
    std::thread t1(findEven,start,end);
    std::thread t2(findOdd,start,end);
    
    t1.join();
    t2.join();
    
    // findEven(start,end);
    // findOdd(start,end);
    
    auto stop_time = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop_time - start_time);
    
    cout <<"Even Sum: "<<EvenSum<<endl;
    cout<<"Even Odd: "<<OddSum<<endl;
    
    cout<<"Sec: "<<duration.count()/1000000<<endl;
    
    return 0;
}


