#include <iostream>
#include <string>
using namespace std;

void readnumber( int &Number1 ,int  &Number2)
{
   
    cout<<"Enter the first number: ";
    cin>>Number1;
    cout<<"Enter the second number: ";
    cin>>Number2;
}

bool cheakGreaterNumber(int Number1 , int Number2)
{
    if (Number1 > Number2)
        return true;
    else
        return false;
}

void printResult(int Number1 , int Number2)
{
    if (cheakGreaterNumber(Number1 , Number2))
        cout<<"Yes, the first number "<<Number1<<" is greater than the second number"<<Number2<<"."<<endl;
    else
        cout<<"Yes, the second number "<<Number2<<" is greater than the first number"<<Number1<<"."<<endl;
}

int main()
{

    int Number1 , Number2;
    readnumber(Number1 , Number2);
    printResult(Number1 , Number2);
    

  return 0;
}