#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    float average = 0;
    int numbers[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i = i + 1)
    {
        sum = sum + numbers[i];
    }
    average = sum / 5;
    cout << sum << ":" << endl;
    cout << average << ":" << endl;
}