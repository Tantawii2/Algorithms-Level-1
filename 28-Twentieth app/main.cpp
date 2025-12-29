#include <iostream>
using namespace std;
#include <cmath>

void readnumber(float &d) {
  cout << "Enter the A of the square: ";

  cin >> d;

}

float CalculateArea(float d) {
  float Area = 0;
  const float pi = 3.14;
  Area =  pi * pow((d/2),2);
  
  return Area;
}

void print(float Area) {
  cout << "The Area of the square is: " << Area << endl;
}
int main() {
  float d;

  readnumber(d);
  print(CalculateArea(d));

  return 0;
}
