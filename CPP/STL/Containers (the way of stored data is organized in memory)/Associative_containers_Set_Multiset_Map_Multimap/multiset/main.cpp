//multiset is an associative container that contains a sorted set of duplicate objects of type way.
// the diff bw set and multiset is, multiset can have duplicate values, where as set will not contain duplicates.
//it is ususally implemented using red-black tree.
//If we want to store user defined data types in multiset then we will have to provide compare function so that
//multiset can store them in sorted order.
// we can pass the order of sorting while constructing set object.
#include <iostream>
#include <iterator>
#include <set>
#include<string>
#include<functional>
using namespace std;
class Person{
    public:
    float age;
    string name;
    bool operator < (const Person& rhs) const { return age<rhs.age; };
    bool operator > (const Person& rhs) const { return age>rhs.age; };
};
int main()
{
//For pre-defined
	// empty set container
	multiset<int> s={2,3,4,5,1,8,7,8,6}; //defalt stores in ascending order
   //set<int, less<int> > s={2,3,4,5,1,8,7,6};//to stores in ascendingnding order
   //set<int, greater<int> > s={2,3,4,5,1,8,7,6}; //to stores in descending order
    for(const auto& e: s)
    cout<<e<<"  ";
//	set<int, greater<int> > s2; //to stores in ascending order

// For user - defined (objects)
    multiset<Person, std::greater<>> Set = {{30,"Rupesh"},{25,"Hitech"},{22,"Bhaskar"}};
    for(const auto& e: Set)
    cout<<e.age<<" "<<e.name<<endl;
    return 0;
}
