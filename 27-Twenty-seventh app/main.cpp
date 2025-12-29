#include <iostream>
using namespace std;

int ReadNumber()
{
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;
    return number;
}
void printAllNumbersFrom1ToN(int number)
{
    for (int i =1 ; i < number+1; i++)
        {
            cout <<i<<endl;
        }
}
int main()
{
  printAllNumbersFrom1ToN(ReadNumber());

 
    return 0;
}
