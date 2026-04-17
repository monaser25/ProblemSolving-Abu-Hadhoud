// 3x3OrderedMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void FillMatrix(int arr[3][3],short Rows,short Cols)
{
	int index = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++) 
		{
			index++;
			arr[i][j] = index;
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
	int arr[3][3];
	FillMatrix(arr, 3, 3);
	PrintMatrix(arr, 3, 3);

}


