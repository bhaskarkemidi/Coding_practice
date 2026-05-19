/*
// Topic: std::try_lock() on mutex in c++11 threading
1. try_lock() tries to lock the mutex. Returns immediately , on successful lock aquisition Returns true otherwise
returns false.
2. If try_lock() is not able to lock mutex, then it doesn't get blocked that's why it is called non-blocking.
3. If try_lock() is called again by the same thread which owns the mutex, the behaviour is undefined.
    it is dead lock situation with undefined behaviour,(if you wwant to be able to lock the same mutex by same thread
    )

*/
#include <iostream>
#include <thread>
#include <mutex>
std::mutex mtx;
int counter = 0;
using namespace std;
void increaseTheCounter100000Time()
{
    for(int i=0;i<100000;++i){
    if(mtx.try_lock()){
    ++counter;
    mtx.unlock();
    }
    }
    
}
int main()
{
   std::thread t1(increaseTheCounter100000Time);
   std::thread t2(increaseTheCounter100000Time);
   
   t1.join();
   t2.join();
   
   cout<<"counter could increases upto : "<<counter<<endl;
    return 0;
}
