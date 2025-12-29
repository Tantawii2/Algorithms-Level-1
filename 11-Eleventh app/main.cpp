#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };    

void readThreeNumber(float &mark1, float &mark2, float &mark3) {
  cout << "Enter Number One : " << endl;
  cin >> mark1;
  cout << "Enter Number Two : " << endl;
  cin >> mark2;
  cout << "Enter Number Three : " << endl;
  cin >> mark3;
}

float AvreageThreeNumbers(float &mark1, float &mark2, float &mark3) {
    float Avreage = (mark1 + mark2 + mark3) / 3;
    cout << "Avreage is : " << Avreage<<endl;
    
  return Avreage;
}

enPassFail checkAverage(float Avreage)
{
    if (Avreage >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
    
}

void printResult(enPassFail AverageMark) 
{
    

    if (AverageMark == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Failed" << endl;
}



int main() {

  float mark1, mark2, mark3;
  readThreeNumber(mark1, mark2, mark3);
  printResult(checkAverage(AvreageThreeNumbers(mark1, mark2, mark3)));


  return 0;
}