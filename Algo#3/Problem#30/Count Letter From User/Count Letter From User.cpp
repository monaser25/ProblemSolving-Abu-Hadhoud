// Count Letter From User.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1 = " ";
	cout << "Enter String \n";
	getline(cin, S1);
	return S1;
}
char ReadChar()
{
	char C1 = ' ';
	cout << "Enter Char \n";
	cin >> C1;
	return C1;
}
short CountLetter(string S1, char C1)
{
	short Counter = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] == C1) Counter++;
	}
	return Counter;
}
int main()
{
 
	string S1 = ReadString();
	char C1 = ReadChar();
	cout << "Letter '" << C1 << "' " << "Count " << CountLetter(S1, C1) << endl;


	system("pause>0");
}

