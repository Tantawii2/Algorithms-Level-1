#include <iostream>  
#include <string>     
using namespace std; 

enum enumbertype {Even=0 , Odd=1};

int ReadNumber()
{
    int Number;
    cout << "Please enter a number? ";
    cin >> Number;
    return Number;
}
enumbertype cheakNumerType(int Number)
{
    if (Number % 2 == 0)
        return enumbertype::Even;
    else
        return enumbertype::Odd;
}
void PrintNumberType(enumbertype NumberType)
{
    if (NumberType == enumbertype::Even)
        cout << "Number is Even" << endl;
    else
        cout << "Number is Odd" << endl;
    
}







int main()
{
    PrintNumberType(cheakNumerType(ReadNumber()));
    return 0;  
}