#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    int count = 0;

    cout << "Enter " << n << " numbers, one per line:\n";

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        bool found = false;

        for (int j = 0; j < count; j++)
        {
            if (arr[j] == num)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "Already Entered: " << num << endl;
        }
        else
        {
            arr[count] = num;
            count++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}