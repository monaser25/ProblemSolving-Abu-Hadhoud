// Lower First Letter Of EachWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1 = " ";
	cout << " Enter Your String \n";
	getline(cin, S1);
	return S1;
}
string LowerFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;
	for (int i = 0; i < S1.length(); i++)
	{
		
		if (S1[i]!=' ' && isFirstLetter)
		{
			S1[i]=tolower(S1[i]);
		}
		isFirstLetter = (S1[i] == ' '?true:false);
	}
	return S1;
}
int main()
{
	string S1;
	S1 =LowerFirstLetterOfEachWord(ReadString());
	cout << S1;
	system("pause>0");
}


