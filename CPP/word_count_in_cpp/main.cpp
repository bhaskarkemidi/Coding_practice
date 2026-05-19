/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ Program to demonstrate use of stringstream object
#include <iostream>
#include <sstream>
#include<string>

using namespace std;

int main()
{

	string s = " A BB       CCCCCC BBBBB   CC HHHH      NNN  N  ";
	stringstream obj(s);
	// string to store words individually
	string temp;
	int cnt=0;
	// >> operator will read from the stringstream object
	while (obj >> temp) {
		cnt++;
	}
	cout<<"CNT :"<<cnt<<endl;
	return 0;
}
