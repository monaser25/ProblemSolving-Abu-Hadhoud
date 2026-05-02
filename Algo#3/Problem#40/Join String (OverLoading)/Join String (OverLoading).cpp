// Join String (OverLoading).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string JoinString(string arr[],short Length,string Delim)
{
    string S1;
    for (short i = 0; i < Length; i++)
    {
        S1 += arr[i] + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(vector <string> vString, string Delim)
{
    string S1;

    for (string& word : vString)
    {
        S1 += word + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}

int main()
{
    vector <string> vString = { "Mohamed","Naser","Ahmed" };
    string arrString[] = {"Mohamed","Naser","Ahmed"};
    cout << JoinString(vString, "$") << endl;
    cout << JoinString(arrString,3, "#");

    system("pause>0");
}


