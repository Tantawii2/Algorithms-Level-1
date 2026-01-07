#include <iostream>
#include <cmath>
using namespace std;

void readNumber(float& BillValue)
{
    cout << "Plese Write the BillValue  :  ";
    cin >> BillValue;

}


float  CalculateService(float BillValue)
{
    float Service = BillValue * 0.10;
    return Service  ;
}

float  CalculateTax(float BillValue)
{
    float Tax = BillValue * 0.16;
    return Tax  ;
}

float calulateTotalBill(float BillValue)
{
    float TotalBill = BillValue + CalculateService(BillValue) + CalculateTax(BillValue);
    return TotalBill;
}


void PrintScreen( float BillValue,float Service,float Tax , float TotalBill )
{
    cout << "**************************************" << endl;
    cout << "************* Your Bill***************" << endl<< endl;
    cout << "Customer BillValue is : " << BillValue << endl ;
    cout << "Customer ServiceFee is : " << Service << endl ;
    cout << "Customer SalesTax is : " << Tax << endl;
    cout << "**************************************" << endl;
    cout << "Customer TotalBill is : " << TotalBill << endl;
    


}


int main()
{
    float  BillValue = 0;
        readNumber( BillValue);

    PrintScreen( BillValue, CalculateService(BillValue), CalculateTax(BillValue),                     calulateTotalBill(BillValue));
    return 0;
}
