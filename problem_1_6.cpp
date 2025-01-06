/*
Problem_06 >> Write a Program to read a number and print the sum of its digits.
Sum Of Digits 
input>> 1234

output>>
Sum Of Digits : 10

*/


#include <iostream>
#include <string>
using namespace std;


float ReadNum(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void Sum_Digts(int Num) {

    int Remainder = 0;
    int Sum = 0;
  
    while (Num > 0) {
    Remainder = Num % 10;
    Num /= 10;  
    Sum += Remainder;

    } 
    cout  << "\nSum Of Digits [" << Sum << "] ";
}


int main() {
    Sum_Digts(ReadNum("please enter Number "));
    return 0;
}
