#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(    int& number , int& power)
{

    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter power: ";
    cin >> power;
    
    
}

int CalculatePowers(double number , double power)
{
    double result = pow(number, power);
        return  result;

}

void Print(int result)
{
    
   cout<<"The result is: "<<result<< endl;
    
}

int main()
{
    int number = 0;
    int power = 0;

    ReadNumber(number , power);
    Print(CalculatePowers(number , power));
    
    return 0;
}
