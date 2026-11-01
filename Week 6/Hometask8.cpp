#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    int flightNumber[n];
    string destination[n];
    int seatsAvailable[n];

    // Input flight details
    for (int i = 0; i < n; i++)
    {
        cout << "Enter flight number for flight " << i + 1 << ": ";
        cin >> flightNumber[i];
        cout << "Enter destination for flight " << flightNumber[i] << ": ";
        cin >> destination[i];
        cout << "Enter seats available for flight " << flightNumber[i] << ": ";
        cin >> seatsAvailable[i];
    }

    // Display flight information
    cout << "\nFlight Information:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Flight " << flightNumber[i] << " to " << destination[i]
             << " has " << seatsAvailable[i] << " seats available.\n";
    }

    // Find flights with less than 5 seats
    cout << "\nFlights with less than 5 seats available:\n";
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (seatsAvailable[i] < 5)
        {
            cout << "Flight " << flightNumber[i] << " to " << destination[i]
                 << " has only " << seatsAvailable[i] << " seats left!\n";
            found = true;
        }
    }
    if (!found)
    {
        cout << "No flights with less than 5 seats available.\n";
    }
    return 0;
}