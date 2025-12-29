#include <iostream>
using namespace std;

int ReadAge()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    return age;
}

bool IsAgeInRange(int age, int from, int to)
{
    return (age >= from && age <= to);
}

int ReadAgeInRange(int from, int to)
{
    int age;

    do
    {
        age = ReadAge();

        if (!IsAgeInRange(age, from, to))
            cout << "Invalid age! Please enter age between "
                 << from << " and " << to << ".\n";

    } while (!IsAgeInRange(age, from, to));

    return age;
}



int main()
{
    int age = ReadAgeInRange(18, 45);
    PrintResult(age);

    return 0;
}
void PrintResult(int age)
{
    cout << "Your age is: " << age << endl;
}