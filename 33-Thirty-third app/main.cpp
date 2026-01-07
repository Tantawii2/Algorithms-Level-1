#include <iostream>
#include <cmath>
using namespace std;

int ReadGrade()
{
    int Grade;
    cout << "Enter a Grade: ";
    cin >> Grade;
    return Grade;

}

char CheakGrade(int  Grade)
{
    if (Grade >= 90 && Grade <= 100)
        return 'A';
    else if (Grade >= 80 && Grade <= 89)
        return 'B';
      else if (Grade >= 70 && Grade <= 79)
          return 'C';
      else if (Grade >= 60 && Grade <= 69)
          return 'D';
      else if (Grade >= 50 && Grade <= 59)
          return 'E';
      else 
          return 'F';
}

void Print( char result)
{


         cout << "The Grade is: " << result << endl;
    

}

int main()
{
    //int Grade = 0;   
    Print(CheakGrade(ReadGrade()));
    //    Print(CalculatePowers(Grade, power));

    return 0;
}
