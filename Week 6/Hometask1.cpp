#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum of all elements: " << sum << endl;
    return 0;
}