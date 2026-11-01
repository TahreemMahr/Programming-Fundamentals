#include <iostream>
using namespace std;
int main()
{
    string my_password, user_enter;
    my_password = "pass@123!";
    cout << "Enter the password: ";
    cin >> user_enter;
    if (user_enter == my_password)
    {
        cout << "Wow ! You have cracked the code!";
    }
    else
    {
        cout << "it is not that simple,Try Again";
    }
}