// Count Each Word In String.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintEachWordInString(string S1)
{
	string delim = " ";	
	short pos = 0;
	string sWord;
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			cout << sWord << '\n';
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		cout << S1 << '\n';
	}

}
short CountEachWordInString(string S1)
{
	string delim = " ";
	short pos = 0;
	short counter = 0;
	string sWord;
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			counter++;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		counter++;
	}

	return counter;
}

int main()
{
	string S1 = ReadString();
	cout << "Your String Are : \n";
	PrintEachWordInString(S1);
	cout << "Number Of Word = " << CountEachWordInString(S1);

	system("pause>0");
}


