#include <iostream>
#include <cmath>
using namespace std;

float readnumberofhours(    float& hours)
{
    cout << "enter number of hours: ";
    cin >> hours;
    return hours;
}

float calculateWeeks(float hours)
{
    float weeks = (hours / 24) / 7;
    return weeks;
}

float calculateDays(float hours)
{
    float Days = (hours / 24) ;
    return Days;
}

void printResults(float weeks, float Days , float hours)
{
     cout << "hours: " << hours << endl;
    cout << "weeks: " << weeks << endl;
    cout << "Days: " << Days << endl;
   
}


int main()
{
    float hours;
    readnumberofhours( hours);
    printResults(calculateWeeks(hours), calculateDays(hours), hours);
   
    return 0;
}
