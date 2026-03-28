#include <iostream>
using namespace std;
main()
{
    char letter[100];
    cout << "enter a word :";
    cin >> letter;

    for (int i = 0; letter[i] != '\0'; i++)
    {
        cout << letter[i] << "found at position :" << i << endl;
    }
    return 0;
}
