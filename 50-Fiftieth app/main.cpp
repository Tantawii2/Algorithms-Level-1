#include <iostream>
using namespace std;

void readPassword(int& Password,bool& flag )
{
    int count=0;
    do{
        cout << "Please enter your password 4 Number: ";
          cin >> Password;
        flag=true;
        count++;
    }
        while (Password != 1234);     
        cout << "Your login was successful." << endl;

    if (count==3)
    {
        cout << "Your account has been locked." << endl;
    }
}
void showbalance(bool flag)
{
    if (flag == true)
    {
        cout << "Your balance is: 100000000000";
    }

    
}

int main() {
    int Password=0;
    bool flag=false;
    readPassword(Password,flag );
    showbalance(flag);
  
    
  return 0;
}
