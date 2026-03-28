#include <iostream>
using namespace std;
main()
{
    char word[100];
    int i;
    cout << "enter a string ";
    cin.getline(word, 100);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'z')
        {
            word[i] = 'a';
        }
        else
        {
            word[i] = word[i] + 1;
        }
    }
    cout << "next word is " << word << " ";
}