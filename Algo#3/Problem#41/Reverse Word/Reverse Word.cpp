// Reverse Word.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
vector <string> SplitString(string StringInput,string Delim)
{
	vector<string> vString;
	string word;
	short pos = 0;

	while((pos = StringInput.find(Delim)) != std::string::npos)
	{
			word = StringInput.substr(0, pos);

			if (word!="")
			{
				vString.push_back(word);
			}

			StringInput.erase(0, pos + Delim.length());
	}

	if (StringInput!="")
	{
		vString.push_back(StringInput);

	}
	return vString;
}


string ReverseWord(string StringInput)
{
	vector<string> vString;
	string String2 = "";
	vString = SplitString(StringInput, " ");
	vector<string>::iterator iter = vString.end(); // 
	while (iter != vString.begin())
	{
		--iter;
		String2 += *iter + " ";
	}
	String2 = String2.substr(0, String2.length()-1);//trim right
	return String2;
}
int main()
{
	string S1 = ReadString();
	cout << '\n';
	cout << ReverseWord(S1);

}

