#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "enter word ";
    cin >> word;
    int lastindex = word.length();
    cout << "enter word in reverse ";
    for (int i = lastindex; i >= 0; i--)
    {
        cout << word[i];
    }
}