#include <iostream>  
#include <string>     
using namespace std; 
struct Person
{
    int age;
    bool IsHaveDrivingLicense;
};

Person  EnterYourData()
{
    Person person;
    cout << "Enter your age: ";
    cin >> person.age;
    cout << "Do you have a driving license? (1 - yes, 0 - no): ";
    cin >> person.IsHaveDrivingLicense;    
    return person;
}

bool IsAccepted(Person person){
    return (person.age >= 21 && person.IsHaveDrivingLicense == 1);
}

void PrintResult(Person person)
{
    if(IsAccepted(person))
         cout << "You are accepted." << endl;
    else
        cout << "You are not accepted." << endl;
   
    
}


int main()
{
       PrintResult( EnterYourData());
    
    
    return 0;  
}