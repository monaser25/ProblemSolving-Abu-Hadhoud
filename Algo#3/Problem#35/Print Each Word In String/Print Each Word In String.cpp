// Print Each Word In String.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintEachWord(string S1)
{
    string delim = " ";
    short pos = 0;
    string sWord;
    
    while ((pos = S1.find(delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord!="") cout << sWord << "\n";
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "") cout << S1 << endl;
   
}
int main()
{
    string S1 = ReadString();
    cout << "Your String Words Are : \n";
    PrintEachWord(S1);

    system("pause>0");
}


