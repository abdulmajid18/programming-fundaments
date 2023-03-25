#include <iostream>
using namespace std;

int main()
{
    double x{2.7}; // OK
    int y{x};      // error: double -> int might narrow

    int a{1000}; // OK
    char b{a};   // error: int -> char might narrow

    char b1{1000}; // OK
    char b2{48};   // error: narrowing (assuming 8-bit chars)
}