#include <iostream>
using namespace std;

enum enDaysOfWeek { Sat = 1, Sun, Mon, Tue, Wed, Thu, Fri };

int readnumbers()
{
    int number = 0;
    do {
        cout << "Please enter a number (1 to 7): ";
        cin >> number;
    } while (number < 1 || number > 7);

    return number;
}

enDaysOfWeek checkDay(int number)
{
    return (enDaysOfWeek)number;
}

void printDay(enDaysOfWeek day)
{
    switch (day)
    {
    case Sat:
        cout << "Saturday";
        break;
    case Sun:
        cout << "Sunday";
        break;
    case Mon:
        cout << "Monday";
        break;
    case Tue:
        cout << "Tuesday";
        break;
    case Wed:
        cout << "Wednesday";
        break;
    case Thu:
        cout << "Thursday";
        break;
    case Fri:
        cout << "Friday";
        break;
    }
}

int main()
{
    int number = readnumbers();
    enDaysOfWeek day = checkDay(number);
    printDay(day);

    return 0;
}
