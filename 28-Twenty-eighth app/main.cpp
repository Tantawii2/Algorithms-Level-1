#include <iostream>
using namespace std;

int ReadNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void PrintSumOfEvenNumbersFrom1ToN(int number)
{
    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
            sum += i;
    }

    cout << "The sum of even numbers from 1 to " << number << " is: " << sum << endl;
}

int main()
{
    PrintSumOfEvenNumbersFrom1ToN(ReadNumber());
    return 0;
}
