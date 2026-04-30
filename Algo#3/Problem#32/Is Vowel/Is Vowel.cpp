// Is Vowel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

char ReadChar()
{
    char C1 = '\0';
    cout << " Enter A Char \n";
    cin >> C1;
    return C1;
}
bool IsVowel(char C1)
{
    string vowels = "aeiou";
    char targetC1 = tolower(C1);
    for (short i = 0; i < vowels.length(); i++)
    {
        if (targetC1 == vowels[i]) return true;
    }
    return false;
}
int main()
{
    char C1 = ReadChar();
    IsVowel(C1) ? cout << "Yes Letter '" << C1 << "' Is Vowel\n" : cout << "No Letter '" << C1 << "' Isn't Vowel\n";
    system("pause>0");
}


