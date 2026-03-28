#include <iostream>
using namespace std;
main()
{
    int num_of_things[100];
    float amountdue;
    cout << "Enter quartes ";
    cin >> num_of_things[0];
    cout << "Enter dimes ";
    cin >> num_of_things[1];
    cout << "Enter nickels ";
    cin >> num_of_things[2];
    cout << "Enter pennies ";
    cin >> num_of_things[3];
    float amount = num_of_things[0] * 0.25 + num_of_things[1] * 0.10 + num_of_things[2] * 0.05 + num_of_things[3] * 0.01;
    cout << "Total amount in dollars: " << amount << endl;
    cout << "enter the amount due ";
    cin >> amountdue;
    if (amount >= amountdue)
    {
        cout << "can you pay amount? YES!";
    }
    else
    {
        cout << "can you pay amount? NO!";
    }
}