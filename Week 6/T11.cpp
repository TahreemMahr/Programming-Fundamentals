#include <iostream>
using namespace std;
int main()
{
    char statement[1000];
    cout << "enter a string: ";
    cin.getline(statement, 1000);
    for (int i = 0; statement[i] != '\0'; i++)
    {
        if (statement[i] == 'a' || statement[i] == 'e' || statement[i] == 'i' || statement[i] == 'o' || statement[i] == 'u' || statement[i] == 'A' || statement[i] == 'E' || statement[i] == 'I' || statement[i] == 'O' || statement[i] == 'U')
        {
            for (int j = i; statement[j] != '\0'; j++)
            {
                statement[j] = statement[j + 1];
            }
            i--;
        }
    }
    cout << "string after removing vowels: " << statement << endl;
}