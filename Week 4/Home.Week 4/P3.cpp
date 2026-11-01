#include <iostream>
using namespace std;
int main()
{
    cout << "Enter temperature of city 1 in degree: ";
    int city1;
    cin >> city1;
    cout << "Enter temperature of city2 in degree: ";
    int city2;
    cin >> city2;
    int differ;
    differ = city1 - city2;
    if (differ > 10 || differ < -10)
    {
        cout << "difference is too big";
    }
    else
    {
        cout << "program ends";
    }
}
