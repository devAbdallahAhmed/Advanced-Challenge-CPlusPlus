/*
Problem_07 >> Write a Program to read a number and print it reverse
Reverse Number
input>> 1234

output>>4321

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

int  ReverseNumber(int Number) {
    int remainder = 0 , Number2 = 0;

    while (Number >0)
    {
        remainder = Number % 10;
        Number /= 10;
        Number2 = Number2 * 10 + remainder;
    }
    return Number2;
}

int main() {
    cout << ReverseNumber(ReadNum("Please Enter The Num "));
    return 0;
}
