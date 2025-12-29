#include <iostream>
using namespace std;
#include <cmath>

void readnumber(float &a, float &d)
{
    cout<<"Enter the side of the rectangle: ";

    cin>>a;

    cout<<"Enter the diagonal of the rectangle: ";
    cin>>d;
  
}

float CalculateArea(float a, float d)
{
  float Area = 0;
  Area = a*sqrt(pow(d,2)-pow(a,2));
  return Area;

}

void print(float Area)
{
    cout << "The Area of the rectangle is: " << Area << endl;
  
}
int main()
{
    float a, d;

    readnumber(a, d);
    print(CalculateArea(a, d));
  
    return 0;
}
