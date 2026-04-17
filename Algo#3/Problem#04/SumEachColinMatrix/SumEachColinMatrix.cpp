// SumEachColinMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomNumber(int From, int To)
{
	int ranNum = rand() % (To - From + 1) + From;
		return ranNum;

}
void FillMarix(int arr[3][3], int Rows, int Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j=0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMarix(int arr[3][3], int Rows, int Cols)
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
int ColsSum(int arr[3][3],int Rows,int arrCols)
{
	int sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		sum += arr[i][arrCols];
	}
	return sum;
}
void PrintEachColSum(int arr[3][3], int Rows, int Cols)
{
	cout << "\nThe the following are the sum of each col in the matrix:\n";
	for (short j = 0; j < Cols; j++)
	{
		cout << "Sum of Col " << j + 1 << " " << ColsSum(arr, Rows, j) << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMarix(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMarix(arr, 3, 3);
	PrintEachColSum(arr, 3, 3);
	return 0;
}
