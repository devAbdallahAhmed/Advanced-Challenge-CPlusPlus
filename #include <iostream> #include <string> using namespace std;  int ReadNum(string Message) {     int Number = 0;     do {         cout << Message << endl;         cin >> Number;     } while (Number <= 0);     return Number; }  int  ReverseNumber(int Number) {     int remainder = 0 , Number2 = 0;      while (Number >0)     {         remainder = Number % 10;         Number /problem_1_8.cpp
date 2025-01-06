/*
Problem_08 >> Write a Program to read a digit and a number , 
then print digit frequency in that number.
Didit Frequency 
input>> 1223222
        2
output>>
Digit 2 frequency is 5 Times

*/

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int  CountDigitFrequency(int DigitToCheck,int Number) {
    int remainder = 0, FreqCount = 0;

    while (Number > 0)
    {
        remainder = Number % 10;
        Number /= 10;
        if (DigitToCheck == remainder) {
            FreqCount++;
        }
    }
    return FreqCount;
}

int main() {

    int Number = ReadNum("Please Enter Postivie Number ");
    short DigitToCheck = ReadNum("Please EnterDigit To Check");
    cout  << "\nDigit " << DigitToCheck << " Frequency " << CountDigitFrequency( DigitToCheck, Number) << " Time\n";
    return 0;
}
