#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

void CalculatePowers(int number, double& power_Two, double& power_Three, double& power_Four)
{
    power_Two = pow(number,2);
    power_Three = pow(number, 3);
    power_Four = pow(number, 4);
}

void Print(double power_Two, double power_Three, double power_Four)
{
    
    cout << "Power Two: " << power_Two << endl;
    cout << "Power Three: " << power_Three << endl;
    cout << "Power Four: " << power_Four << endl;
    
}

int main()
{

    double power_Two = 0;
    double power_Three = 0;
    double power_Four = 0;

    CalculatePowers(ReadNumber(), power_Two, power_Three, power_Four);
    Print(power_Two, power_Three, power_Four);
    return 0;
}
