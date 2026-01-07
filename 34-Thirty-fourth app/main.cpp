#include <iostream>
#include <cmath>
using namespace std;

double ReadGrade()
{
    double TotalSales;
    cout << "Enter a TotalSales: ";
    cin >> TotalSales;
    return TotalSales;

}

double CalculateCommission(double  TotalSales)
{
    double Commission = 0;
    if( TotalSales >= 1000000)
        Commission = TotalSales * 0.01;
    else if (TotalSales >= 500000 && TotalSales < 1000000)
            Commission = TotalSales * 0.02;
    else if (TotalSales >= 100000 && TotalSales < 500000)
         Commission = TotalSales * 0.03;
    else if (TotalSales >= 50000 && TotalSales < 100000)
         Commission = TotalSales * 0.05;
    else
         Commission = TotalSales * 0.00;

 return Commission;
    
}

void Print( double Commission)
{


         cout << "The Commission is: " << Commission << endl;
    

}

int main()
{
    Print(CalculateCommission(ReadGrade()));

    return 0;
}
