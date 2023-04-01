#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout << i << '\t' << square(i) << '\n';
    }
}