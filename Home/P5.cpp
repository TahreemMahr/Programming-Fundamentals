#include <iostream>
using namespace std;
main()
{
    int noofholidays;
    int normsleepingtime = 30000;
    cout << "enter the number of holidays ";
    cin >> noofholidays;
    int workingdays = 365 - noofholidays;
    int timetoplay = (workingdays * 63) + (noofholidays * 127);
    int difference = 30000 - timetoplay;
    int hour = difference / 60;
    int min = difference % 60;
    if (normsleepingtime >= timetoplay)
    {
        cout << "tom sleeps well" << endl;
        cout << hour << " hour and " << min << " minutes is less for play" << endl;
    }
    else
    {
        cout << "tom will run away" << endl;
        cout << hour << " hour and " << min << " minutes is more for play" << endl;
    }
}