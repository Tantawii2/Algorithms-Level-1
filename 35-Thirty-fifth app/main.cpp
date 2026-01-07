#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(float& Penny, float& Nickel, float& Dime, float& Quarter, float& Dollar )
{
    cout<< "please enter a number of Penny: ";
    cin >> Penny;
    cout << "please enter a number of Nickel: ";
    cin >> Nickel;
    cout << "please enter a number of Dime: ";
    cin >> Dime;
    cout << "please enter a number of Quarter: ";
    cin >> Quarter;
    cout << "please enter a number of Dollar: ";
    cin >> Dollar;
    
}


float CalculateTotalPennies(float Penny, float Nickel, float Dime, float Quarter, float Dollar)
{
    float TotalPennies = Penny + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
    return TotalPennies; 
}

float calculateTotalDollars(float TotalPennies)
{
    float TotalDollars = TotalPennies / 100;
    return TotalDollars;
    
}

void PrintResult(float TotalDollars , float TotalPennies)
{
    cout << "Total Pennies = " << TotalPennies << " Pennies " << endl;
    cout << "Total Dollars = " << TotalDollars << " Dollars " << endl;
}


int main()
{

    float Penny, Nickel, Dime, Quarter, Dollar=0;
    
    ReadNumber(Penny, Nickel, Dime, Quarter, Dollar);
    PrintResult(calculateTotalDollars(CalculateTotalPennies(Penny, Nickel, Dime, Quarter, Dollar)), CalculateTotalPennies(Penny, Nickel, Dime, Quarter, Dollar));
    
    return 0;
}
