#include <iostream>
#include <cmath>
using namespace std;

void readnumbers( float& days,float& hours,float& minutes, float& seconds)
{
      cout << "Enter days: ";
     cin >> days;
     cout << "Enter hours: ";
     cin >> hours;
     cout << "Enter minutes: ";
     cin >> minutes;
     cout << "Enter seconds: ";
     cin >> seconds;
    
   
}

float ConvertDaysToSeconds(float days)
{
    float DaysToSeconds = (days * 24) * 3600;
    return DaysToSeconds;
}

float ConvertHoursToSeconds(float hours)
{
    float HoursToSeconds = hours * 3600;
    return HoursToSeconds;
}

float calculateMinutesToSecound(float minutes)
{
    float MinutesToSecound = minutes * 60 ;
    return MinutesToSecound;
}

float calculateAllSecounds( float DaysToSeconds,float HoursToSeconds,float MinutesToSecound, float seconds )
{
    float Sum = DaysToSeconds + HoursToSeconds + MinutesToSecound+ seconds;
    return Sum;
}

void printResults( float DaysToSeconds ,float HoursToSeconds,float MinutesToSecound,float seconds  , float Sum )
{
    cout << "Days to seconds: " << DaysToSeconds << endl;
    cout << "Hours to seconds: " << HoursToSeconds << endl;
    cout << "Minutes to seconds: " << MinutesToSecound << endl;
    cout << "Seconds: " << seconds << endl;
    cout << "Total seconds: " << Sum << endl;
    
   
}


int main()
{
    float days,hours,minutes,seconds=0;
    readnumbers( days, hours, minutes,seconds);

    calculateAllSecounds(
        ConvertDaysToSeconds(days),
        ConvertHoursToSeconds(hours),
        calculateMinutesToSecound(minutes),
        seconds);


    
    printResults(
        ConvertDaysToSeconds(days),
        ConvertHoursToSeconds(hours),
        calculateMinutesToSecound(minutes),
        seconds,
        calculateAllSecounds(
            ConvertDaysToSeconds(days),
            ConvertHoursToSeconds(hours),
            calculateMinutesToSecound(minutes),
            seconds)
    );
    
    return 0;
}
