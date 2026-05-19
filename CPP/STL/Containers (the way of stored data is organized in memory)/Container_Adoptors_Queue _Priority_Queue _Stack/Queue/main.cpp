/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
    // CPP code to illustrate Queue in
// Standard Template Library (STL)
/* Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.
Elements are inserted at the back (end) and are deleted from the front. 
Queues use an encapsulated object of deque or list (sequential container class)
as its underlying container, providing a specific set of member functions to access its elements. */

#include <iostream>
#include <queue>

using namespace std;

int
main ()
{
  queue < int >q;
  q.push (5);
  q.push (6);
  q.push (7);
  q.push (8);
  queue < int >k = q;
  while (!k.empty ())
    {
      cout << k.front () << endl;
      k.pop ();
    }
  cout << q.back () << endl;
  cout << q.size () << endl;
  cout << q.front () << endl;
  cout << q.pop () << endl;

  return 0;
}
