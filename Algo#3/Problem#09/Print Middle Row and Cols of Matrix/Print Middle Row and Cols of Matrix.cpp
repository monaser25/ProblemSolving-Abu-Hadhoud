// Print Middle Row and Cols of Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
		for(short j=0;j<Cols;j++)
		{
			arr[i][j] = RandomNumber(1, 10);
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

void PrintMiddleRow(int arr[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;
	for(short j = 0; j < Cols; j++)
	{
		cout << arr[MiddleRow][j] <<" ";
	}
	cout << endl;
}
void PrintMiddleCols(int arr[3][3], short Rows, short Cols)
{
	short MiddleCol = Cols/ 2;
	for (short i = 0; i < Rows; i++)
	{
		cout << arr[i][MiddleCol] <<" ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrix(arr, 3, 3);

	PrintMatrix(arr, 3, 3);
	cout << "Middle Rows " << endl;
	PrintMiddleRow(arr, 3, 3);
	cout << "Middle Cols" << endl;
	PrintMiddleCols(arr, 3, 3);
 
}

