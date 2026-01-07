#include <iostream>
using namespace std;

int ReadNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void PrintFactorialFrom1ToN(int number)
{
    int Factorial = 1;

    for (int i = number; i > 1; i--)
    {
       Factorial *= i;
    cout<< Factorial<<"\n";
         
    }

    cout << "The Factorial of number " << number << " is: " << Factorial << endl;
}

int main()
{
      PrintFactorialFrom1ToN(ReadNumber());
    return 0;
}
