/*
Problem_13 >> Write a Program to read a number and Print inverted pattern As follows.

Number Pattern

input>> 
5

output>>
5
55
555
5555
55555

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

void Print_Num_Pattern(int Num) {
    cout << " \n";

    for (int i = 1; i <= Num; i++) { 
        for (int j = 1 ; j <=i; j++)
        {
            cout  << i;
        }
        cout << " \n";
    }
}

int main() {
   
    Print_Num_Pattern(ReadNum("Please Enter Num"));
    return 0;
}
