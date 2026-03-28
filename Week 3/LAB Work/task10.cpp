#include<iostream>
#include<string>

using namespace std;

int main(){
    string country;
    int wins, draws, losses;
    float points;

    cout << "Enter country name: ";
    cin >> country;

    cout << "Enter number of wins: ";
    cin >> wins;

    cout << "Enter number of draws: ";
    cin >> draws;

    cout << "Enter number of losses: ";
    cin >> losses;

    points = (wins * 3) + (draws * 1) + (losses * 0);

    cout << country << " has obtained " << points << " points in Asia Cup Tournament." << endl;

    return 0;
}