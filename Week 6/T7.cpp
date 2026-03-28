#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "enter number of resistance values you want to print ";
    cin >> n;
    float resistance[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the values of resistance in ohm ";
        cin >> resistance[i];
        sum = sum + resistance[i];
    }
    cout << "total resistance is " << sum;
}