// Upper - Lower  All Letter Of String.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
string UpperAllString(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = toupper(S1[i]);
	}
	return S1;
}
string LowerAllString(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}
int main()
{
	string S1 = ReadString();
	cout << UpperAllString(S1) << endl;
	cout << LowerAllString(S1) << endl;;




	system("pause>0");
}

