#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your firt name (folowed by 'enter'):\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << "!\n";
}