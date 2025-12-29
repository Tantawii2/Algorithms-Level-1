#include <iostream>
#include <string>
using namespace std;
enum enPassFail { Pass = 1, Fail = 2 };


int readMark()
{
    int Mark;
    cout << "Enter your Mark: ";
    cin >> Mark;
    return Mark;
    
}
enPassFail cheackMark(int Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
    return enPassFail::Fail;
    
}

void printResult(enPassFail Mark)   
{
    if (Mark == enPassFail::Pass)
        cout << "You Passed";
    else
        cout << "You Failed";
}
int main() {
    printResult(cheackMark(readMark()));
    return 0;
}