#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int x = 2.9;
    char c = 106;

    // x becomes 2 it truncaes and cut off the 0.9
    // c = 42 ie * in ASCII since no char 1066 exists

    int x1 = narrow_cast<int>(2.9);    // throws since it cant fit
    int x2 = narrow_cast<int>(2.0);    // OK
    char c1 = narrow_cast<char>(1066); // throws
    char c2 = narrow_cast<int>(85);    // OK
}