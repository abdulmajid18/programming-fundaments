#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your firstname and age\n";
    string first_name = "????";
    int age = 0;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age
         << ")\n";
}
