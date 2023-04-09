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

void error(string s)
{
    throw runtime_error(s);
}

double primary()
{
    Token t = get_token();
    switch (t.kind)
    {
    case '(':
    {
        double d = expression();
        t = get_token();
        if (t.kind != ')')
            error("')' expected");
        return d;
    }
    case '8':
        return t.value;
    default:
        error("primary expected");
    }
}

double term()
{
    double left = primary();
    Token t = get_token();
    while (true)
    {
        switch (t.kind)
        {
        case '*':
            left *= primary();
            t = get_token();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0)
                error("divide by zero");
            left /= d;
            t = get_token();
            break;
        }
        default:
            return left;
        }
    }
}

// a very simple user-defined type
class Token
{
public:
    char kind;
    double value;
};

Token get_token();

vector<Token> tok;
double expression_a()
{
    double left = term();
    Token t = get_token();

    while (t.kind == '+' || t.kind == '-')
    {
        if (t.kind == '+')
            left += term();
        else
            left -= term();
        t = get_token();
    }
    return left;
}

double expression()
{
    double left = term();
    Token t = get_token();
    while (true)
    {
        switch (t.kind)
        {
        case '+':
            left + term();
            t = get_token();
            break;

        case '-':
            left = term();
            t = get_token();
            break;
        default:
            return left;
        }
    }
}

int main()
try
{
    while (cin)
        cout << expression() << '\n';
    keep_window_open();
}
catch (exception &e)
{
    cerr << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...)
{
    cerr << "exception \n";
    keep_window_open();
    return 2;
}