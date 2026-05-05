// Replace Word (Custom).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Enter A string \n";
	getline(cin, S1);
	return S1;

}
vector <string> SplitString(string S1, string Delim)
{
	short pos = 0;
	string sWord;
	vector<string>vString;
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord!="")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());

	}
	if (S1!="")
	{
		vString.push_back(S1);
	}
	return vString;
}

string LowerCase(string input)
{
	for (char& c : input)
	{
		c = tolower(c);
	}
	return input;
}

vector<string> ReplaceWord(string InPut, string oldWord, string NewWord, bool matchcase = false)
{
	vector<string> vString = SplitString(InPut, " ");
	string TargetWord = LowerCase(oldWord);
	for (string& i : vString)
	{
		if (matchcase)
		{
			if (oldWord == i)
			{
				i = NewWord;
			}
			
		}
		else
		{
			if (LowerCase(i) == TargetWord)
			{
				i = NewWord;
			}
		}
	}
	return vString;
}
void Printer(vector<string>vString)
{
	for (auto& i : vString)
	{
		cout << i << " ";
	}
}
int main()
{
	string oldWord, NewWord;
	string S1 = ReadString();
	cout << "Enter Word Want change it\n";
	cin >> oldWord;
	cout << "Enter New String For Changing \n";
	cin >> NewWord;
	cout << endl;
	cout << "New String \n";
	Printer(ReplaceWord(S1, oldWord, NewWord,false));

	system("pause>0");
}

