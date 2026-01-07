#include <iostream>
using namespace std;

int ReadNumber() {
  int number = 0;
  cout << "Enter a number: ";
  cin >> number;
  return number;
}
void printAllNumbersFromNTo1(int number) {
  for (int i = number; i > 0; i--) {
    cout << i << endl;
  }
}
int main() {
  printAllNumbersFromNTo1(ReadNumber());

  return 0;
}
