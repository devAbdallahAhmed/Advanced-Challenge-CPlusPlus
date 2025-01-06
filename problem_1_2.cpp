// Print All Prime Numbers 1 To N 

#include <iostream>
#include <string>
using namespace std;

enum enNum { prime = 1, NotPrime = 2 };
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

enNum CheckPrime_Number(int Number ){
    for (int i = 2; i <= Number; i++) {
        if (Number % i == 0) 
            return enNum::NotPrime;
        else
            return enNum::prime;
    }
}

 void PrintPrime_Number(float Num) {

    cout << "Prime Number Form 1 To" << Num << " Are : \n";
    for (int i = 1; i <= Num; i++) {
        if (CheckPrime_Number(i) == enNum::prime)
            cout << i  << endl;
    }
}
int main() {
    PrintPrime_Number(ReadNum("Please Enter The Number : "));
  
    return 0;
}
