#include <iostream>
using namespace std;

void readnumbers(float& LoanAmount,float& MonthlyPayment)
{
    cout << "Enter the loan amount: ";
    cin >> LoanAmount;
    cout << "Enter the monthly payment: ";
    cin >> MonthlyPayment;
}

void calculate(float LoanAmount, float MonthlyPayment)
{
    float balance = LoanAmount/MonthlyPayment;
    cout << "It will take " << balance << " months to pay off the loan.";
}

int main() {
    float LoanAmount,  MonthlyPayment=0;
    readnumbers(LoanAmount, MonthlyPayment);
    calculate(LoanAmount, MonthlyPayment);
    
  return 0;
}
