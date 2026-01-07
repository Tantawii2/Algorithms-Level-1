#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};
int ReadNumber()
{
    int Number;
    do{
        cout << "Please enter a number? ";
          cin >> Number;
    }
    while(Number <= 0);
return Number;
}
int cheakPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
        if (cheakPrime(Number) == enPrimeNotPrime::Prime)
            cout << "Prime" << endl;

     else
            cout << "Not Prime" << endl;
}

int main()
{
    PrintNumberType(cheakPrime(ReadNumber()));

    return 0;
}
