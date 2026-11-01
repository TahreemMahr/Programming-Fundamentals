#include <iostream>
using namespace std;
int main()
{
    int num = 1, sum = 0;
    while (num <= 100)
    {
        sum = sum + num;
        num = num + 1;
    }
    cout << "Sum: " << sum;
}