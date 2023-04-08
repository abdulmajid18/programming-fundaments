#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

int main()
{
    cout << "Please enter expression (we can handle + and -):";
    int lval = 0;
    int rval;
    char op;
    int res;

    cin >> lval >> op >> rval;

    if (op == '+')
        res = lval + rval;
    else if (op == '-')
        res = lval - rval;

    cout << "Result: " << res << '\n';
    keep_window_open();
    return 0;
}