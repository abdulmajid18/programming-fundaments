#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your firstname and age\n";
    string first_name = "????";
    double age = 0;
    cin >> first_name >> age;
    age = age * 12;
    cout << "Hello, " << first_name << " (age " << age
         << " months)\n";
}
