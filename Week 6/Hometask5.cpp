#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter number of customers: ";
    cin >> n;
    cin.ignore();

    string names[n];
    cout << "Enter the names of " << n << " customers:" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, names[i]);
    }

    char letter;
    cout << "Enter a letter to check: ";
    cin >> letter;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (names[i][0] == letter)
        {
            count++;
        }
    }

    cout << "Total names starting with '" << letter << "': " << count << endl;
    return 0;
}