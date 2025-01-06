// Perfect Number from 1 to N

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
     cout << "Perfect Number Form 1 To " << Number << " Are : \n";
     for (int i = 1; i < Number; i++) {
         if (IsPerfect_Number(i))
             cout << " [" << i << "]" << endl;
     }
 }
int main() {
    Print_Perfect_Number(ReadNum("Please Enter The Number : "));
  
    return 0;
}
