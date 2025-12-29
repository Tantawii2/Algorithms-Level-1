#include <iostream>
using namespace std;
#include <cmath>

void readnumber(float &d) {
  cout << "Enter the L of the Circle: ";

  cin >> d;

}

float CalculateArea(float d) {
  float Area = 0;
  const float pi = 3.14;
  Area =  pow(d, 2)/(4 *pi);
  
  return Area;
}

void print(float Area) {
  cout << "The Area of the Circle is: " << Area << endl;
}
int main() {
  float d;

  readnumber(d);
  print(CalculateArea(d));

  return 0;
}
