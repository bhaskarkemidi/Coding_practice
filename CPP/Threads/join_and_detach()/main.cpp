/*
Use of join(), detach(), and joinable() in thread in c++11

//JOIN Notes:
1. once the thread is started, we wait for this thread to finish by calling join() function on thread object.
2. Double join() will result into program termination.
2. If needed we should check thread is joinable before joining. (using joinable() function).

//DETACH NOTES:
1, This is used to detach newly created thread from the parent thread.
2. Always check before detacjing a thread that it is joinable otherwise we may end up double detaching 
and double detach will result into program termination.
3. If we have detached thread and main function is returning then the detached thread execution is 
suspended.

Note: The moment you create a thread that thread is marked as joinable and then later once either 
you apply join() or detach() on that thread then it automatically becomes non-joinable.
Either join() 
*/
#include <iostream>
#include <thread>
#include<chrono>
using namespace std;

void run(int x)
{
    while (x-- > 0)
    {
        cout<<"cpp nuts"<<endl;
    }
    std::this_thread::sleep_for(chrono::seconds(3));
}
int main()
{
    std::thread t(run, 10);//creating thread object t by passing run as function pointer and 10 as count parameter.
    cout<<"main()"<<endl;
    if(t.joinable())
    t.join();
    if(t.joinable())
    t.join();
    cout<<"main after"<<endl;
    return 0;
}