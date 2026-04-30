// Print All Vowels In String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string S1 = "";
	cout << "Enter A String \n";
	getline(cin, S1);
	return S1;
}
bool IsVowel(char C1)
{
	string Vowels = "aeiou";
	char targetChar = tolower(C1);
	for (short i = 0; i < Vowels.length(); i++)
	{
		if (Vowels[i] == targetChar) return true;
	}
	return false;
}
void PrintVowel(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i])) cout << S1[i] << " ";
	
	}
}
int main()
{
	string S1 = ReadString();
	cout << "Vowel in String are : ";
	PrintVowel(S1);
	system("pause>0");
}


