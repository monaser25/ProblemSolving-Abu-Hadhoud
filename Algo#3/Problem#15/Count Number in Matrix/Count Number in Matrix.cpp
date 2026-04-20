// Count Number in Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3],short Rows,short Cols)
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
int CountNumberInMatrix(int arr[3][3], int Number,short Rows,short Cols)
{
	short counter = 0;
	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			if (arr[i][j] == Number)counter++;
			
		}

	}
	return	counter;
}
void InputFromUser(int& input)
{
	cout << "Enter A Number " << endl;
	cin >> input;
	
}
int main()
{
	int Matrix1[3][3] = { {9,1,12},{0,9,1},{0,9,9} };
	int Input;
	PrintMatrix(Matrix1, 3, 3);
	InputFromUser(Input);

	cout << "Number " << Input << " count in  matrix is "<<CountNumberInMatrix(Matrix1, Input, 3, 3);
}


