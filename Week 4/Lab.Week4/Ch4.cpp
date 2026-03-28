#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if (ch == 'a')
    {
        cout << "It is a vowel";
    }

    else if (ch == 'e')
    {
        cout << "It is a vowel";
    }

    else if (ch == 'i')
    {
        cout << "It is a vowel";
    }

    else if (ch == 'o')
    {
        cout << "It is a vowel";
    }

    else if (ch == 'u')
    {
        cout << "It is a vowel";
    }

    else if (ch >= '0' and ch <= '9')
    {
        cout << "It is a number";
    }

    else
    {
        cout << "It is a consonant";
    }
}