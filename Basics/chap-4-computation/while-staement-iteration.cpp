#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}

int main()
{
    int i = 0;
    while (i < 100)
    {
        cout << i << '\t' << square(i) << '\n';
        ++i;
    }
}