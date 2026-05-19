/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* 
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added
at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector
or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of
member functions to access its elements.
 Time complexity: The time complexity of this program is O(N),
 Space complexity:The space complexity of this program is O(N),
 
*/
#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
	stack.push(22);
	stack.push(24);
	stack.push(25);
	int num=0;
	stack.push(num);
	stack.pop();
	stack.pop();
	stack.pop();

	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
