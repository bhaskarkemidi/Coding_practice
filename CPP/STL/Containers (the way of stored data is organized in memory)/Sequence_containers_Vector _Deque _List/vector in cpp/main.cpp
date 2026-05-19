/* 1. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
   2. std::vector in C++ is the class template that contains the vector container and its member functions. 
      It is defined inside the <vector> header file.
   3. Only back operations performs.
   3. basic functionalities, 
   i> iterators --> begin(),end(),rbegin(),rend(),cbegin(),cend(),crbegin(),crend()
   ii> capacity --> size(),max_size(),capacity(),resize(),empty(),shrink_to_fit(),reserve(),
   iii> Element access -->- refeerence_operator(g), at(g),front(),bac(),data().k
   iv> Modifiers  --> assign(),push_back(),pop_back(),insert(),erase(),swap(),clear(),emplace(),emplace_back().
   v> The time complexity for doing various operations on vectors is-

Random access – constant O(1)
Insertion or removal of elements at the end – constant O(1)
Insertion or removal of elements – linear in the distance to the end of the vector O(N)
Knowing the size – constant O(1)
Resizing the vector- Linear O(N) */

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // Assign vector
    vector<int> v;
 
    // fill the vector with 10 five times
    v.assign(5, 10);
     // inserts 5 at the beginning
    v.insert(v.begin(), 5);
 
    cout << "\nThe first element is: " << v[0];
 
    // removes the first element
    v.erase(v.begin());
    
      // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
 
    // Inserts 20 at the end
    v.emplace_back(20);
    auto n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    for(vector<int> ::iterator i=v.begin(); i!=v.end();i++)
    cout<<*i<<endl;
    v.pop_back();
    v.push_back(100);
    for(vector<int> ::iterator i=v.begin(); i!=v.end();i++)
    cout<<*i<<endl;
    // //vector<int> v;
    // v.reserve(31);
    // for(int i=0;i<32;i++)
    // {
    //     v.push_back(i);
    //     cout<<v.size()<<"   "<<v.capacity()<<endl;
    // }
    // for(vector<int> ::iterator i=v.begin();i!=v.end();i++)
    //   cout<<*i<<" ";
    //   cout<<endl;
    //   v.push_back(3);
    //   //v.push_front(4);
    // for(vector<int> ::iterator i=v.begin();i!=v.end();i++)
    //   cout<<*i<<" ";
    //   cout<<endl;
    //     return 0;
}



