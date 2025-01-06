/*
Problem_09 >> Write a Program to read a digit and a number , 
then print All frequency in that number.
All Didit Frequency 
input>> 1223222
        
output>>
Digit 1 frequency is 1 Times
Digit 2 frequency is 5 Times
Digit 3 frequency is 1 Times

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

int  CountDigitFrequency(short DigitToCheck,int Number) {
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

void PrintDigitsFrequency(int Number) {
    short DigitFrequency = 0;
    for (int i = 0; i < 10; i++) {
        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
     cout << "\nDigit " << i << " Frequency " << DigitFrequency<< " Time\n";
    }
}

int main() {
    int Number = ReadNum("Please Enter Postivie Number ");
    PrintDigitsFrequency(Number);
    return 0;
}
