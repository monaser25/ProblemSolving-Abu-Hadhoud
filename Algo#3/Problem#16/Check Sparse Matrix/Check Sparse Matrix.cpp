// Check Sparse Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
		cout << '\n';
	}
}
bool CheckSparseMatrix(int arr[3][3],short Rows,short Cols)
{
	int counter = 0;


	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (arr[i][j] == 0)counter++;
		}
	}
	return (counter > ((Rows * Cols)/2));
}
int main()
{
	int Matrix1[3][3] = { {0,0,12},{9,9,1},{0,0,9} };
	PrintMatrix(Matrix1, 3, 3);
	
	CheckSparseMatrix(Matrix1, 3, 3) ? cout << "It's Sparse \n" : cout << "It's Not Sparse \n";



	system("pause>0");
}

