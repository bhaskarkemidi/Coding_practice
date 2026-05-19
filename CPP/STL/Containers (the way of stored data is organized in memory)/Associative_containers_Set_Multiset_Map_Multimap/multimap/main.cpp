/*
1. multimap is an associative container that contains sorted list of key, value pairs, while permitting multiple
    entries with the same key.
2. It stores key value pairs with sorted order on the basis of key(A/D)
3. Data structure used in multimap not defined by standard, but red-black is assumed by most of the people.
4. Lookup: count, find, contains, equal_range, lower_bound, upper_bound.
5. we dont have at() and [] functions to get an element like we had in map.
*/
#include <iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    multimap<char, int> Multimap;
    Multimap.insert(make_pair('a',1));
    Multimap.insert(make_pair('b',2));
    Multimap.insert(make_pair('c',3));
    Multimap.insert(make_pair('d',4));
    Multimap.insert(make_pair('a',5));
    
    for(auto& alm: Multimap)
        cout<<alm.first<<" "<<alm.second<<endl;
    return 0;
}