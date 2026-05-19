/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

void printSquare(int num) {
    std::cout << num * num << " ";
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Print the squares of each number in the vector
    std::for_each(numbers.begin(), numbers.end(), printSquare);

    return 0;
}
