#include <iostream>
using namespace std;
#include <cmath>

int EnterYourAge() 
{
  int age;
  cout << "Enter your age: ";
  cin >> age;
  return age;
}

void CheakAge(int age , int from , int to)
{
  if (age >= from && age <= to)
    cout << "Valid Age" << endl;
  else
    cout << "Invalid Age" << endl;
}

int main()
{
  CheakAge(EnterYourAge(),18,45);
  return 0;
}
