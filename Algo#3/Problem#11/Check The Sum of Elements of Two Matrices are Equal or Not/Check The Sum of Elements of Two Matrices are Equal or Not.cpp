// Check The Sum of Elements of Two Matrices are Equal or Not.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
int CalcSumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
bool CheckMatrixEquality(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
	return (CalcSumOfMatrix(arr1, Rows, Cols) == CalcSumOfMatrix(arr2, Rows, Cols));

}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}

}
void PrintIfMatrixErqility(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
	if (CheckMatrixEquality(arr1, arr2, Rows, Cols))
	{
		cout << "Matrices are equal" << endl;
	}
	else
	{
		cout << "Matrices Not equal" << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[3][3], arr2[3][3];

	FillMatrix(arr1, 3, 3);
	cout << "Matrix 1" << endl;
	PrintMatrix(arr1, 3, 3);

	FillMatrix(arr2, 3, 3);
	cout << "Matrix 2" << endl;
	PrintMatrix(arr2, 3, 3);

	PrintIfMatrixErqility(arr1, arr2, 3, 3);

}

