#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    vector<double> temps;

    for (double temp; cin >> temp;)
        temps.push_back(temp);

    double sum = 0;
    double high_temp = 0;
    double low_temp = 0;

    for (int x : temps)
    {
        if (x > high_temp)
            high_temp = x;
        if (x < low_temp)
            low_temp = x;
        sum += x;
    }

    cout << "High temperature: " << high_temp << '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum / temps.size() << '\n';

    double sum = 0;
    double high_temp = –1000;
    double low_temp = 1000;
    int no_of_temps = 0;
    // initialize to impossibly low
    // initialize to “impossibly high”
    for (double temp; cin >> temp;)
    {
        // read temp
        ++no_of_temps;
        // count temperatures
        sum += temp;
        // compute sum
        if (temp > high_temp)
            high_temp = temp;
        // find high
        if (temp < low_temp)
            low_temp = temp;
        // find low
    }
    cout << "High temperature: " << high_temp << '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum / no_of_temps << '\n';
}