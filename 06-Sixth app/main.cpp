#include <iostream>
#include <string>
using namespace std;
struct FullName {
string FirstName;
string LastName;
};

FullName ReadName()
{
    FullName Name;
    cout << "Enter your first name: ";
    cin >> Name.FirstName;
    cout << "Enter your last name: ";
    cin >> Name.LastName;
    return Name;
}

void PrintName(FullName Name)
{
    string FullName="";
    FullName = Name.FirstName + " " + Name.LastName;
    cout << "Your Fullname is: " << FullName;
}

int main() {
    PrintName(ReadName());
  return 0;
}