#include <iostream>
using namespace std;

int main()
{
    int a = 20000;
    char c = a;
    cout << "c in char is " << c << '\n'; // since it does have an ascii it caps and represent by a space with ascii 32
    // try to squeeze a large int into a small char
    int b = c;
    cout << "b in int is " << b << '\n';
    if (a != b)
        // != means “not equal”
        cout << "oops!: " << a << "!=" << b << '\n';
    else
        cout << "Wow! We have large characters\n";
}