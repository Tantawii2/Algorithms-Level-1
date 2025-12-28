#include <iostream>  

#include <string>     

using namespace std; 

void EnterUserName(string &Name)
{

    cout << "Enter Your  Name " << endl;
    cin>>Name;
}

void DisplayName(string Name)
{

    cout << "Hello :- "<<Name << endl;
}

int main()
{
   string name;

    EnterUserName(name);
    DisplayName(name);

    return 0;  
}