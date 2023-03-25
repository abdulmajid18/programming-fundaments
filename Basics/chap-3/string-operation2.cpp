#include <iostream>
#include <string>
using namespace std;

// read first and second name
int main()
{
    cout << "Please enter two name\n";
    string first;
    string second;
    cin >> first >> second;
    if (first == second)
        cout << "That's the same name twice\n";
    if (first < second)
        cout << first << " is alphabetically before " << second << '\n';
    if (first > second)
        cout << first << " is alphabetically after " << second << '\n';
}