#include <iostream>
using namespace std;

void readnumber(int &Number1, int &Number2, int &Number3)
{
    cout << "Enter the first number: ";
    cin >> Number1;

    cout << "Enter the second number: ";
    cin >> Number2;

    cout << "Enter the third number: ";
    cin >> Number3;
}

int cheakGreaterNumber(int Number1, int Number2, int Number3)
{
    int max = Number1;

    if (Number2 > max)
        max = Number2;

    if (Number3 > max)
        max = Number3;

    return max;
}

void printResult(int Number1, int Number2, int Number3)
{
    int max = cheakGreaterNumber(Number1, Number2, Number3);

    if (max == Number1)
        cout << "Yes, the first number " << Number1
             << " is the greatest." << endl;

    else if (max == Number2)
        cout << "Yes, the second number " << Number2
             << " is the greatest." << endl;

    else
        cout << "Yes, the third number " << Number3
             << " is the greatest." << endl;
}

int main()
{
    int Number1, Number2, Number3;

    readnumber(Number1, Number2, Number3);
    printResult(Number1, Number2, Number3);

    return 0;
}
