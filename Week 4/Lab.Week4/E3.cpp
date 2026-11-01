#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your Name: ";
    cin >> name;
    if (name == "ali")
    {
        cout << "Welcome " << name;
    }

    if (name != "ali")
    {
        cout << "Try again!";
    }
}