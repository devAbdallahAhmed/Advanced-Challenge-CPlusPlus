// Multiplication Table 1 to 10 

#include <iostream>
#include <string>
using namespace std;


void PrintTableHeader() {
    cout << "\n\n\t\t\t MultiPliaction Table Form 1 to 10\n\n ";
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << "\n______________________________________________________________________________________\n";
}
string CloumSperator(int i) {
    if (i < 10)
        return "  |";
    else
        return" |";

}
void MultiPliactionITable() { 
    PrintTable();
    for (int i = 1; i <= 10; i++) {
        cout << " " << i << Sperator(i) << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << j * i << "\t";
        }

      cout  << endl;
    }
   
       
}
 
int main() {
  
    MultiPliactionITable();
    return 0;
