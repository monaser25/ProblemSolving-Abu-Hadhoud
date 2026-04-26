// Invert All LetterCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Enter Your String \n";
	getline(cin, S1);
	return S1;
}
string InvertString(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = islower(S1[i]) ? toupper(S1[i]) : tolower(S1[i]);
	}

	return S1;
}

int main()
{
	string S1 = ReadString();
	cout << InvertString(S1) << endl;





	system("pause>0");
}


