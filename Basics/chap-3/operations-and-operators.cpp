#include <iostream>
#include <string>
#include<cmath>
using namespace std;


int main() {
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
    <<"\nn+1 == " << n+1
    <<"\nthree times n == " << 3*n
    <<"\ntwice n == " << n+n
    <<"\nn squared == " << n*n
    <<"\nn half on n == " << n/2
    <<"\nnsquare root of n == " << sqrt(n)
    <<'\n';
}