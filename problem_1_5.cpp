/*
Problem_05 >> Write a Program to read a number and print it in a reverse order.
Print Digits in a Reverse Order
input>> 1234

output>>
4
3
2
1
  */

 #include <iostream>
#include <string>
using namespace std;

float ReadNum(string Message)
{
    int Number = 0;
      cout << Message  <<  endl;
        cin >> Number;

    return Number;
}

void Check_Number(int Num) {
 
    int Remainder = 0;
        do
        {
            Remainder = Num % 10;
            Num /= 10;
            cout << Remainder << endl;
        } while (Num > 0);
}

int main() {
     Check_Number(ReadNum("please enter Number "));
    return 0;
}
