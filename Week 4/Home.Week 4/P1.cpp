#include <iostream>
using namespace std;
int main()
{
    cout << "Enter country name: ";
    string name;
    cin >> name;
    cout << "ticket price in dollars";
    int price;
    int disprice;
    cin >> price;
    if (name == "Ireland")
    {
        disprice = price - (price * 0.10);
    }
    else
    {
        disprice = price - (price * 0.05);
    }
    cout << "discount price: " << disprice;
}
