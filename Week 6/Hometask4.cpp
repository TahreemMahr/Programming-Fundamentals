#include <iostream>
using namespace std;

main()
{
    string names[5];
    cout << "Enter names of 5 students:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, names[i]);
    }
    cout << "\nStudent names are:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}