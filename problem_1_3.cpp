/*

Problem_03 >> Write a Program to Check if the number is Perfect Number or Not ?
note : perfect Number = all Sum(divisors)
28 = 1 + 2 + 4 + 7 + 14 
6 = 1 + 2 + 3

input>> 
28
12

output>>
28 is Perfect Number
12 is Not Perfect Number

*/

 #include <iostream>
#include <string>
using namespace std;

float ReadNum(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <=0 );  
   
    return Number;
}

 bool IsPerfect_Number(int Num) {
     int sum = 0;
     for (int i = 1; i < Num; i++) {
         if (Num % i == 0) {
             sum += i;
         } 
     }
     return Num == sum;
}

 void Print_Perfect_Number(int Number) {
     if (IsPerfect_Number(Number)) {
         cout << " [" << Number << "] : IS Perfect Number\n";
     }else
     cout << " [" << Number << "] : IS  Not Perfect Number\n";

 }

int main() {
    Print_Perfect_Number(ReadNum("Please Enter The Number : "));
  
    return 0;
}
