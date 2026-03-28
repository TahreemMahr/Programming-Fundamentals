#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    string students[n];

    cout << "Enter names of " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        getline(cin, students[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (students[i] > students[j])
            {
                swap(students[i], students[j]);
            }
        }
    }

    cout << "Students in alphabetical order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << students[i] << endl;
    }

    return 0;
}