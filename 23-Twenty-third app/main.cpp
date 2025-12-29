#include <iostream>
using namespace std;
#include <cmath>

void readnumber(float &a , float &b,float &c) {
  cout << "Enter a ";

  cin >> a;
  cout << "Enter b ";
  cin >> b;

  cout << "Enter c ";
  cin >> c;
  

}
void calculatePerimeter(float a , float b, float c,float &Perimeter)
{
  Perimeter = (a+b+c)/2;
  
}
float CalculateArea(float a , float b, float c,float p)
{
  float Area = 0;
  const float pi = 3.14;
  Area = pi*pow(((a*b*c)/(4*(sqrt(p*(p-a)*(p-b)*(p-c))))), 2);
  
  return Area;
}

void print(float Area) {
  cout << "The Area of the Circle is: " << Area << endl;
}
int main() {
  float a , b ,c;
  float Perimeter ;

  readnumber(a,b,c);
  calculatePerimeter(a,b,c,Perimeter);
  print(CalculateArea(a,b,c,Perimeter));

  return 0;
}
