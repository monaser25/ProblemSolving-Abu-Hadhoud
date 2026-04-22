// Min-Max Number in Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int MinNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
	int MinNumber = arr[0][0];
	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			if (MinNumber > arr[i][j])
				MinNumber = arr[i][j];
		}
	}
	return MinNumber;
}
int MaxNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
	int MaxNumber = arr[0][0];
	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			if (MaxNumber < arr[i][j])
				MaxNumber = arr[i][j];
		}
	}
	return MaxNumber;
}

int main()
{
	int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nMinimum Number is: ";
	cout << MinNumberInMatrix(Matrix1, 3, 3);
	cout << "\n\nMax Number is: ";
	cout << MaxNumberInMatrix(Matrix1, 3, 3);
	system("pause>0");

}
