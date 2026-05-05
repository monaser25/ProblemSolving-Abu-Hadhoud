// Replace Words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Enter A String \n";
	getline(cin, S1);
	return S1;
}
string ReplaceWordInString(string inputString, string StringToReplace, string ReplaceTO)
{
 
	short pos = inputString.find(StringToReplace);
	while (pos != std::string::npos)
	{
		inputString = inputString.replace(pos,StringToReplace.length(), ReplaceTO);
		pos = inputString.find(StringToReplace);
	}
	return inputString;
}
int main()
{
	string InputString = ReadString();
	string StringToReplace;
	string ReplaceTo;
	cout << "Enter A Word want Change it \n";
	cin >> StringToReplace;
	cout << " Enter New Word \n";
	cin >> ReplaceTo;
	cout << "Original Word \n" << InputString << endl;
	cout << " String After Replace\n" << ReplaceWordInString(InputString, StringToReplace, ReplaceTo);
	
	system("pause>0");
}

