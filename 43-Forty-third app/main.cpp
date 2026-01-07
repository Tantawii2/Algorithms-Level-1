#include <iostream>
using namespace std;

void readnumbers(int& seconds)
{
    cout << "Enter seconds: ";
    cin >> seconds;
}

int ConvertSecondsToDays(int seconds)
{
    return seconds / (24 * 3600);
}

int ConvertSecondsToHours(int seconds)
{
    return seconds / 3600; 
}

int calculateSecondsToMinutes(int seconds)
{
    return seconds / 60; 
}

void printResults(int days, int hours, int minutes, int sec)
{
    cout << days << ":" << hours << ":" << minutes << ":" << sec << endl;
}

int main()
{
    int seconds = 0;
    readnumbers(seconds);

    int days = ConvertSecondsToDays(seconds);
    int rem = seconds % (24 * 3600);

    int hours = ConvertSecondsToHours(rem);
    rem %= 3600;

    int minutes = calculateSecondsToMinutes(rem);
    int sec = rem % 60;

    printResults(days, hours, minutes, sec);

    return 0;
}