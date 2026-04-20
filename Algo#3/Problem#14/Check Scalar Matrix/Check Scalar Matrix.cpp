// Check Scalar Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
bool CheckScalarMatrix(int arr[3][3], short Rows, short Cols)
{
	int FirstElement = arr[0][0];
	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			if (i == j && arr[i][j] != FirstElement) return false;

			if (i != j && arr[i][j] != 0)return false;
		}

	}
	return true;
}
int main()
{
	int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };

	PrintMatrix(Matrix1, 3, 3);
	if (CheckScalarMatrix(Matrix1,3,3))
		cout << "Matrix is scalar" << endl;
	else
		cout << "Matrix is Not scalar" << endl;




	return 0;
}


