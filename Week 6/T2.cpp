#include <iostream>
#include <string.h>
using namespace std;
main()
{
    char word[100];
    cout << "enter a word: ";
    cin >> word;
    cout << "In reverse order: " << strrev(word);
}