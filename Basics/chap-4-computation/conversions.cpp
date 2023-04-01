#include <iostream>
using namespace std;

int main()
{
    double d = 2.5;
    int i = 2;

    double d2 = d / i; // d2 == 1.25
    int i2 = d / i;    // i2 == 1
    int i3{d / i};     //  // error: double -> int conversion may narrow (§3.9.2)

    d2 = d / i; // d2 == 1.25
    i2 = d / i; // i2 == 1

    double dc;
    cin >> dc;
    double df = 9 / 5 * dc + 32; // beware! 9/5= 1

    double dc;
    cin >> dc;
    double df = 9.0 / 5 * dc + 32; // better 90/5= 1.8
}