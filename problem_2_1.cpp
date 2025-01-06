/*
Problem_10 >> Write a Program to read a digit and print it in order from left to right , 
then print All frequency in that number.
Print Didit in order 
input>> 
1234
        
output>>
1
2
3
4

*/


#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
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

void PrintDigits(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main() {
    PrintDigits(ReverseNumber(ReadPositiveNumber("please enter Number ")));
    return 0;
}
