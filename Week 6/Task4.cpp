#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    for (int i = 0; i < 5; i = i + 1)
    {
        cout << "Enter the numbers: ";
        cin >> numbers[i];
    }
    cout << "Enter The first number: " << numbers[0] << endl;
    cout << " Enter The last number: " << numbers[4] << endl;
}