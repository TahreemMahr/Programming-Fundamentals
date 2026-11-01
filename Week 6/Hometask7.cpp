#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    char productNames[n][50];
    double prices[n];
    int quantity[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of product " << i + 1 << ": ";
        cin >> productNames[i];
        cout << "Enter price of " << productNames[i] << ": ";
        cin >> prices[i];
        cout << "Enter quantity of " << productNames[i] << ": ";
        cin >> quantity[i];
    }

    cout << "\nProduct Inventory Report:\n";
    for (int i = 0; i < n; i++)
    {
        double totalValue = prices[i] * quantity[i];
        cout << productNames[i] << ": $" << prices[i] << ", "
             << quantity[i] << " in stock, Total value: $" << totalValue << endl;
    }

    return 0;
}