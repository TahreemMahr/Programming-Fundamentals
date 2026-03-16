#include <iostream>
using namespace std;
int main()
{
    char going;
    cout << "Are your friends going? (Press Y for yes N for no: )";
    cin >> going;
    if (going == 'Y')
    {
        cout << "You are also going!";
    }
    if (going == 'N')
    {
        cout << "You are not going!";
    }
}