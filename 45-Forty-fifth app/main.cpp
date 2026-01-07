#include <iostream>
using namespace std;

enum enMonths { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

int readnumbers()
{
    int number = 0;
    do {
        cout << "Please enter a number (1 to 12): ";
        cin >> number;
    } while (number < 1 || number > 12);

    return number;
}

enMonths checkDay(int number)
{
    return (enMonths)number;
}

void printDay(enMonths month)
{
    switch (month)
    {
        case enMonths::Jan:
            cout << "January";
            break;
        case enMonths::Feb:
            cout << "February";
            break;
        case enMonths::Mar:
         cout << "March";
         break;
        case enMonths::Apr:
         cout << "April";
         break;
        case enMonths::May:
         cout << "May";
         break;
        case enMonths::Jun:
         cout << "June";
         break;
        case enMonths::Jul:
         cout << "July";
         break;
        case enMonths::Aug:
         cout << "August";
         break;
        case enMonths::Sep:
         cout << "September";
         break;
        case enMonths::Oct:
         cout << "October";
         break;
        case enMonths::Nov:
         cout << "November";
         break;
        case enMonths::Dec:
        cout << "December";
        break;
   
    }
}

int main()
{
    int number = readnumbers();
    enMonths month = checkDay(number);
    printDay(month);

    return 0;
}
