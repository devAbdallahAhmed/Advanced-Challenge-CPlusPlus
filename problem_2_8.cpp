// 17 - Guess a 3-Letter Password

#include <iostream>
#include <string>
using namespace std;

string ReadAPassword(string Message)
{
	string ReadPass;
	cout << Message;
	cin >> ReadPass;
	return ReadPass;
}

bool GuessPassword(string ReadAPassword)
{
	string Word = "";
	int Counter = 0;

	for (int i = 65; i <= 90; i++)
	{
		for (int J = 65; J <= 90; J++)
		{
			for (int L = 65; L <= 90; L++)
			{
				Counter++;
				Word = Word + char(i);
				Word = Word + char(J);
				Word = Word + char(L);

				cout << "Trial : " << Counter << ": " << Word << endl;

				if (Word == ReadAPassword)
				{
					cout << endl << "Password is " << Word << endl;
					cout <<"Found After " << Counter << " Trial(s). " << endl;
					return true;
				}
				Word = "";
			}
		}
	}
	return false;
}

int main()
{
	
	GuessPassword(ReadAPassword("Enter Your Password (3-letter): "));
	return 0;
}
