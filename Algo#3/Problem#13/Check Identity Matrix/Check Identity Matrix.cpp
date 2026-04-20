// Check Identity Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

bool CheckIdentityMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i == j && arr[i][j] != 1) return false;

			if (i != j && arr[i][j] != 0) return false;
		
		}
	}
	return true;
}
int main()
{
	//int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	PrintMatrix(Matrix1, 3, 3);
	if (CheckIdentityMatrix(Matrix1,3,3))
	{
		cout << "Matrix is identity" << endl;
	}
	else
	{
		cout << "Matrix is Not identity" << endl;

	}

	return 0;
}


