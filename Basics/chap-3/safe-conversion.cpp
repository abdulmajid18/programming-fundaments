#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c = 'x';
    int i1 = c;
    int i2 = 'x';

    char c2 = i1;
    cout << c << " " << i1 << " " << c2 << '\n';
}