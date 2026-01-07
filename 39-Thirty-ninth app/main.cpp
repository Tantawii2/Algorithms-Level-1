#include <iostream>
#include <cmath>
using namespace std;

void readNumber(float& TotalBill, float& CashPaid)
{

    cout << "Plese Write the TotalBill  :  ";
    cin >> TotalBill;

    cout << "Plese Write the CashPaid  :  ";
    cin >> CashPaid;




}


float  Calculateremainder(float TotalBill, float CashPaid)
{
    float result = CashPaid - TotalBill  ;
    return result  ;
}


void PrintScreen(float TotalBill, float CashPaid,float remainder)
{
    cout << "**************************************" << endl;
    cout << "***********Your Bill*******************" << endl<< endl;
    cout << "Customer TotalBill is : " << TotalBill << endl ;
    cout << " - " << endl;
    cout << "Customer CashPaid is : " << CashPaid << endl;
    cout << "**************************************" << endl;
    cout << "Remender : " << remainder << endl;



}


int main()
{
    float TotalBill, CashPaid = 0;
    readNumber(TotalBill, CashPaid);

    PrintScreen(TotalBill, CashPaid, Calculateremainder(TotalBill, CashPaid));
    return 0;
}
