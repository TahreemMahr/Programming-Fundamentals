#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int freq;
    cout << "Enter the number for frequency: ";
    cin >> freq;
    int count;
    int tempnum;
    for (; num > 0; num = num / 10)
    {
        int lastdigit = num % 10;
        if (lastdigit == freq)
        {
            count++;
        }
    }
    if (tempnum == 0 and freq == 0)
    {
        count = 1;
    }
    cout << "Frequency of " << freq << " in " << tempnum << " is " << count;
}