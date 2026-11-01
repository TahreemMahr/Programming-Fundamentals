#include <iostream>
using namespace std;

int main()
{
    float bill, discount, final_bill;

    cout << "Enter your bill: ";
    cin >> bill;

    if (bill <= 5000)
    {
        discount = bill * 0.05;
    }
    else
    {
        discount = bill * 0.10;
    }

    final_bill = bill - discount;

    cout << "Your discounted bill is: " << final_bill;
}