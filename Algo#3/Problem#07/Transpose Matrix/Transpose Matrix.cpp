// Transpose Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>

using namespace std;

void FillMatrixWithOrder(int arr[3][3], short Rows, short Cols)
{
	int Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for(short j = 0; j<Cols;j++)
		{
			Counter++;
			arr[i][j] = Counter;

		}
	}
}
void TransposeMatrix(int arr[3][3], int arrTrans[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrTrans[i][j] = arr[j][i];
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int arr[3][3], arrTrans[3][3];

	FillMatrixWithOrder(arr, 3, 3);
	TransposeMatrix(arr, arrTrans, 3, 3);
	cout << "Normal Matrix " << endl;
	PrintMatrix(arr, 3, 3);
	cout << "Transpose Matrix " << endl;
	PrintMatrix(arrTrans, 3, 3);
	





	return 0;
}

