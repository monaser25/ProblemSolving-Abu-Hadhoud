// Join String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string JoinString(vector <string> vString,string delim)
{
	string S1;
	for (string &Word : vString)
	{
		S1 += Word+delim;
	}
	return S1.substr(0, S1.length() - delim.length());
}
int main()
{
	vector<string> vString = { "Mohammed","Faid","Ali","Maher" };
	cout << JoinString(vString, "+");


	system("pause>0");

}


