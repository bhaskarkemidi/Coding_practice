//Topic: Mutex in C++ threading | why use mutex | What is race condition and How to solve | what is critical section
//Mutex: Mutual Exclusion
//Race Condition: 
/*
1. Race Condition is a situation two or more threads/process happened to change a common data at the same time.
2. If there is a race condition then we have to protect it and the protected section is called critical section/region.

//Mutex:
1. Mutex is used to avoid the race condition.
2. We use lock(), unlock() on mutex to avoid race condition.

Note::: When you are accessing the data from common resource we will not face race condition issue, 
only we will face issue when we are modifying or changing the data of critical region.
In below prgrm thread1 may create first or thread2 may create.
There is a very tiny difference between t1, and t2 execute, seems like parallel execution, but some difference
1/100000
First t1 or t2 gets thread and lock the section and works it and unlock then it will lock by another thread and works
then unlock,while t1 working on section t2 will be in wait (or) block state.

//Difference between mutex and spinlock
spin lock will be based on while loop checking, the threads(which are not get the resource) are keeps on checking 
to access critical section. thread remains active but is not performaing a useful task, the use of such a lock
is a kind of busy waiting. For this prblm solution is mutex .
this certaily wastes a lot of CPU time by just waiting. Absolutely non-waiting.
Mutex is a sleeping lock. it is also tries to protect the critical section from the concurrent access.
In case of Mutex, there wont't be a while loop for the thread/process to wait.
It would be put to sleep. Then, the processes/threads go on the queue. So CPU wont have to spend time for 
doing nothing,(but it requires context switching to be used, This is complex).
Once the resource is available, the processes(one of them) would be woken up and provided with the access. 
*/
#include <iostream>
#include<thread>
#include <mutex>
using namespace std;
int myAmount = 0;
std::mutex m;//common variable for both threads

void addMoney(){
    m.lock();
    ++myAmount;  //Here this is critical section 
    m.unlock();
} 

int main()
{
    std::thread t1(addMoney);
    std::thread t2(addMoney);
    
    t1.join();
    t2.join();

    return 0;
}
