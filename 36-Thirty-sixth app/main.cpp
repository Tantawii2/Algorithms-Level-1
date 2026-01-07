#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(int& Number1 ,int& Number2, char& OperationType)
{

    cout << "Enter Number1: ";
    cin >> Number1;
    ///////////////////////////////////

    cout << "Enter Number2: ";
    cin >> Number2;
    /////////////////////////////////
    cout << "Enter OperationType: ";
    cin >> OperationType;
}
float Calculate(int Number1, int Number2, char OperationType)
{
    if (OperationType == '+')
        return Number1 + Number2;
    else
        if (OperationType == '-')
            return Number1 - Number2;
    else
            if (OperationType == '*')
                return Number1 * Number2;
    else
                if (OperationType == '/')
                    return Number1 / Number2;
    else
                    return 0;
}
void PrintResults(float Result)
{
    cout << "Result = " << Result << endl;
}
int main()
{
      int Number1,Number2=0;
    char OperationType;
    ReadNumber(Number1,Number2,OperationType);
    PrintResults(Calculate(Number1,Number2,OperationType) );
    
    
    return 0;
}
