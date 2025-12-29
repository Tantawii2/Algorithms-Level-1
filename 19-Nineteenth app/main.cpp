#include <iostream>
using namespace std;
#include <cmath>

void readnumber(float &r) {
  cout << "Enter the Radius of the circle: ";

  cin >> r;

}

float CalculateArea(float r) {
  float Area = 0;
  const float pi = 3.14;
  Area = pi * pow(r, 2);
  return Area;
}

void print(float Area) {
  cout << "The Area of the circle is: " << Area << endl;
}
int main() {
  float r;

  readnumber(r);
  print(CalculateArea(r));

  return 0;
}
