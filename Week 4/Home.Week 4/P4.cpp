#include <iostream>
using namespace std;
int main()
{
    cout << "Number of red roses: ";
    int num1;
    cout << "Number of white roses: ";
    int num2;
    cout << "Number of tulips: ";
    int num3;
    cin >> num3;
    float price1;
    price1 = 2.00 * num1;
    float price2;
    price2 = 4.10 * num2;
    float price3;
    price3 = 2.50 * num3;
    float total = price1 + price2 + price3;
    float dis;
    if (total > 200)
    {
        dis = total - total * 0.20;
        cout << "original price" << total;
        cout << "payable price" << dis;
    }
    else
    {
        "program ends";
    }
}