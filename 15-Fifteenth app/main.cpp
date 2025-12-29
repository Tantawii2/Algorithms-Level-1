#include <iostream>
using namespace std;

void readnumber(float &Length, float &Width)
{
    cout << "Enter the first number: ";
    cin >> Length;

    cout << "Enter the second number: ";
    cin >> Width;
}

int CalculateArea(float Length, float Width)
{
  float Area = 0;
    return Area =  Length * Width;
}

void print(float Area)
{
    cout << "The Area of the rectangle is: " << Area << endl;
  
}
int main()
{
    float Length, Width;

    readnumber(Length, Width);
    print(CalculateArea(Length, Width));
  
    return 0;
}
