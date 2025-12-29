#include <iostream>
#include <string>
using namespace std;
struct Person {
  int age;
  bool IsHaveDrivingLicense;
  bool Recommendation;
};

Person EnterYourData() {
  Person person;
  cout << "Enter your age: ";
  cin >> person.age;
  cout << "Do you have a driving license? (1 - yes, 0 - no): ";
  cin >> person.IsHaveDrivingLicense;
  cout << "Do you have a recommendation? (1 - yes, 0 - no): ";
  cin >> person.Recommendation;
  return person;
}

bool IsAccepted(Person person) {

  if (person.Recommendation == 1)

    return true;

  else if (person.age >= 21 && person.IsHaveDrivingLicense == 1)
    return true;

  else
    return false;
}

void PrintResult(Person person) {

  if (IsAccepted(person))
    cout << "You are accepted." << endl;
  else
    cout << "You are not accepted." << endl;
}

int main() {
  PrintResult(EnterYourData());

  return 0;
}