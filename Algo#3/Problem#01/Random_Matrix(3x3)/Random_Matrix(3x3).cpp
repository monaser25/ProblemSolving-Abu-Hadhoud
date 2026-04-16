
#include <iostream>
#include <string>
#include <iomanip> /*To using a setw*/

using namespace std;

int RandomNumber(int From, int To)
{
	int ranNum = rand() % (To - From + 1) - From;	
	return ranNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3],short Rows,short cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL)); /*we use a realtime to using asrand to make a diifrent random every time 
		and using a unsigned to make it postive only*/

	int arr[3][3];


	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n The following is a 3x3 random matrix:\n";

	PrintMatrix(arr, 3, 3 );


	return 0;
}

