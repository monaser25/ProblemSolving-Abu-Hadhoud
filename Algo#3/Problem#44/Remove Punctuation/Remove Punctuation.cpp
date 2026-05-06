// Remove Punctuation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


string ReadString()
{
	string S1;
	cout << "Enter a String \n";
	getline(cin, S1);
	return S1;
}
string RemovePunctuation(string S1)
{
	string S2 = "";
	for (char& i : S1)
	{
		if (!ispunct(i))
		{
			S2.push_back(i);
		}
	}

	return S2;
}
int main()
{
	string S1 = ReadString();
	cout << endl;
	cout << RemovePunctuation(S1);
	
}

