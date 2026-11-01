#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers are: ";
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i = i + 1)
    {
        cout << "Enter the numbers: ";
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i = i + 1)
    {
        cout << " The numbers are: ";

        cout << numbers[i] << endl;
    }
}