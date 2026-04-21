// Number Exsits in Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool CheckExistsinMatrix(int arr[3][3], short Number, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		
		for (short j = 0; j < Cols; j++)
		{
			if (Number == arr[i][j]) return true;
		}
	}
	return false;
}



int main()
{
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	short input;

	cout << "Enter Number" << endl;
	cin >> input;

  
	CheckExistsinMatrix(Matrix1,input,3,3) ? cout << "Number is Exist \n" : cout << "Number Not Exist \n";





	system("pause>0");
}
