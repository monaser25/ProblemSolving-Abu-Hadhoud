// Print First Letter Of Each Word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Enter Your String \n";
	cin >> S1;
	getline(cin, S1); // To Read All Line 
	return S1;
}
void PrintFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter) cout << S1[i] << "\n";
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
}
int main()
{
	PrintFirstLetterOfEachWord(ReadString());
	system("pause>0");
}

