/*
1. Double-ended queues are sequence containers with the feature of expansion and contraction on both ends.
2. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. 
    Unlike vectors, contiguous storage allocation may not be guaranteed.  
3. A queue data structure allows insertion only at the end and deletion from the front
4. Double-ended queues are a special case of queues where insertion and deletion operations are possible 
    at both the ends. 
5. The functions for deque are same as vector, with an addition of 
    push and pop operations for both front and back.  
*/
#include <iostream>
#include<deque>
#include<vector>
#include<list>
using namespace std;

int main()
{
int a[]={1,5,8,9,3,5,6,4};
deque <int> dq(a,a+8);
for(deque<int> ::iterator i=dq.begin();i!=dq.end();i++)
cout<<*i<<endl<<endl;
dq.pop_front();


    return 0;
}

