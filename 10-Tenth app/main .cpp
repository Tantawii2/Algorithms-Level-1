#include <iostream>
#include <string>
using namespace std;

void readThreeNumber(float &mark1, float &mark2, float &mark3) {
  cout << "Enter Number One : " << endl;
  cin >> mark1;
  cout << "Enter Number Two : " << endl;
  cin >> mark2;
  cout << "Enter Number Three : " << endl;
  cin >> mark3;
}

int AvreageThreeNumbers(float &mark1, float &mark2, float &mark3) {
  int Avreage = (mark1 + mark2 + mark3) / 3;
  return Avreage;
}

void printResult(int total) {
  cout << "The Average Of Three Numbers Is : " << total << endl;
}

int main() {

  float mark1, mark2, mark3;
  readThreeNumber(mark1, mark2, mark3);
  printResult(AvreageThreeNumbers(mark1, mark2, mark3));

  return 0;
}