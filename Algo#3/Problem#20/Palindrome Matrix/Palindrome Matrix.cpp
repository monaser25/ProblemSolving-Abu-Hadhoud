// Palindrome Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";

		}
		cout << "\n";
	}
}

bool isPalindrome(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols/2; j++)
		{
			if (arr[i][j] != arr[i][Cols - 1 - j]) return false;
		}
	}
	return true;
}
int main()
{
	int Matrix1[3][3] = { {1,2,12},{5,5,5},{7,3,7} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	(isPalindrome(Matrix1, 3, 3))?cout << "\nYes: Matrix is Palindrome\n":cout << "\nNo: Matrix is NOT Palindrome\n";
	
		
	
		
	system("pause>0");
}

