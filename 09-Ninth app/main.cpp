#include <iostream>
#include <string>
using namespace std;


void readThreeNumber(int &number1, int &number2, int &number3)
{
    cout<<"Enter Number One : "<<endl;
    cin>>number1;
    cout<<"Enter Number Two : "<<endl;
    cin>>number2;
    cout<<"Enter Number Three : "<<endl;
    cin>>number3;
}

int sumThreeNumbers(int number1, int number2, int number3)
{
    int sum = number1 + number2 + number3;
    return sum;
}


void printResult(int total)
{
    cout<<"The Sum Of Three Numbers Is : "<<total<<endl;
}



int main() {

    int number1, number2,number3;
    readThreeNumber( number1,  number2,  number3);
    printResult(sumThreeNumbers(number1,  number2,  number3));
    
    return 0;
}