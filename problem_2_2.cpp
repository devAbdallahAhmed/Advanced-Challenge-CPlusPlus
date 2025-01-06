/*
Problem_11 >> Write a Program to read a number and check if it is palindrome or not.

Palindrome is a number that reads the same from rigth to left.
Palindrome Number
input>> 
1234
12341

output>>
No , it is Not Palindrome Number
Yes , it is Palindrome Number

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

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}

int IsPalindromeNumber(int Number) {
    return Number == ReverseNumber(Number);
}

int main() {
    if (IsPalindromeNumber(ReadNum("please Enter Num"))) {
        cout << "\nYes, It Is Palindrome ";
    }else
        cout << "\nNo, It Is Not a Palindrome ";
    return 0;
}
