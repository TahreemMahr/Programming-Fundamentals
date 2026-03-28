#include <iostream>
using namespace std;

int main()
{
    int arr1[2], arr2[100], n2;
    int result[102];

    cout << "Enter 2 elements for the first array, one per line:\n";
    for (int i = 0; i < 2; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter number of elements for the second array: ";
    cin >> n2;
    cout << "Enter " << n2 << " elements for the second array, one per line:\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    result[0] = arr1[0];
    for (int i = 0; i < n2; i++)
    {
        result[i + 1] = arr2[i];
    }
    result[n2 + 1] = arr1[1];

    cout << "Resulting array: [";
    for (int i = 0; i < n2 + 2; i++)
    {
        cout << result[i];
        if (i < n2 + 1)
            cout << ", ";
    }
    cout << "]\n";

    return 0;
}