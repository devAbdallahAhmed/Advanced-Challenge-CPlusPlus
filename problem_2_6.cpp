/*
Problem_15 >> Write a Program to read a number and Print inverted letter pattern As follows? 

Inverted letter Pattern

input>> 
3

output>>
a
bb
ccc

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

void Print_Num(int Num) {
    for (int i = 65; i <= 65 + Num - 1;i++) {
 
        for (int j = 1 ;j <= i - 65 + 1 ; j++)
        {

        cout << char(i);
 
        }
        cout << "\n";
    }
}

int main() {
   
    Print_Num(ReadNum("Please Enter Num"));
    return 0;
}
