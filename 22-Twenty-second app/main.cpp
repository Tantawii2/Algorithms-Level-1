#include <iostream>
using namespace std;
#include <cmath>

void readnumber(float &a , float &b) {
  cout << "Enter a ";

  cin >> a;
  cout << "Enter b ";
  cin >> b;

}

float CalculateArea(float a , float b)
{
  float Area = 0;
  const float pi = 3.14;
  Area = pi*((pow(b, 2)/4))*((2*a)-b)/((2*a)+b);
  
  return Area;
}

void print(float Area) {
  cout << "The Area of the Circle is: " << Area << endl;
}
int main() {
  float a , b ;

  readnumber(a,b);
  print(CalculateArea(a,b));

  return 0;
}
