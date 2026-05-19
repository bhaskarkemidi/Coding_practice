/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// set ia an Associative container that contains a sorted set of unique objects of type key.
// It is usually implemented using red-black tree.
//insertion, removal, search have logirthamic complexity.
//by default set container stores in ascending order,
//we can pass the order of sorting while constructing set object.
// It store unique elements and they are stored in sorted order(A/D)

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
	set<int> s={2,3,4,5,1,8,7,6}; //defalt stores in ascending order
   //set<int, less<int> > s={2,3,4,5,1,8,7,6};//to stores in ascendingnding order
   //set<int, greater<int> > s={2,3,4,5,1,8,7,6}; //to stores in descending order
    for(const auto& e: s)
    cout<<e<<"  ";
//	set<int, greater<int> > s2; //to stores in ascending order

// For user - defined (objects)
    set<Person, std::greater<>> Set = {{30,"Rupesh"},{25,"Hitech"},{22,"Bhaskar"}};
    for(const auto& e: Set)
    cout<< e.age << " "<< e.name <<endl;

	// insert elements in random order
// 	s1.insert(40);
// 	s1.insert(30);
// 	s1.insert(60);
// 	s1.insert(20);
// 	s1.insert(50);

// 	// only one 50 will be added to the set
// 	s1.insert(50);
// 	s1.insert(10);

// 	// printing set s1
// 	set<int, greater<int> >::iterator itr;
// 	cout << "\nThe set s1 is : \n";
// 	for (itr = s1.begin(); itr != s1.end(); itr++) {
// 		cout << *itr << " ";
// 	}
// 	cout << endl;

// 	// assigning the elements from s1 to s2
// 	set<int> s2(s1.begin(), s1.end());

// 	// print all elements of the set s2
// 	cout << "\nThe set s2 after assign from s1 is : \n";
// 	for (itr = s2.begin(); itr != s2.end(); itr++) {
// 		cout << *itr << " ";
// 	}
// 	cout << endl;

// 	// remove all elements up to 30 in s2
// 	cout << "\ns2 after removal of elements less than 30 "
// 			":\n";
// 	s2.erase(s2.begin(), s2.find(30));
// 	for (itr = s2.begin(); itr != s2.end(); itr++) {
// 		cout << *itr << " ";
// 	}

// 	// remove element with value 50 in s2
// 	int num;
// 	num = s2.erase(50);
// 	cout << "\ns2.erase(50) : ";
// 	cout << num << " removed\n";
// 	for (itr = s2.begin(); itr != s2.end(); itr++) {
// 		cout << *itr << " ";
// 	}

// 	cout << endl;

// 	// lower bound and upper bound for set s1
// 	cout << "s1.lower_bound(40) : "
// 		<< *s1.lower_bound(40) << endl;
// 	cout << "s1.upper_bound(40) : "
// 		<< *s1.upper_bound(40) << endl;

// 	// lower bound and upper bound for set s2
// 	cout << "s2.lower_bound(40) : "
// 		<< *s2.lower_bound(40) << endl;
// 	cout << "s2.upper_bound(40) : "
// 		<< *s2.upper_bound(40) << endl;

	return 0;
}

