#include <iostream>
using namespace std;

int main()
{
    int n, evenCount = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    cout << "Total Even Numbers: " << evenCount << endl;
    return 0;
}