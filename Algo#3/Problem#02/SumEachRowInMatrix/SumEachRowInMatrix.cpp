// SumEachRowInMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip> /*--> setw()*/
#include <iostream>

using namespace std;

int RandomNumber(int From, int To)
{
    int ranNum = rand() % (To - From + 1) + From;
    return ranNum;
}

void FllMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}
void PrintMatrix(int arr[3][3],short Rows,short Cols)
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
int SumRow(int arr[3][3],short RowNumber,short Cols)
{
    int Sum = 0;
    for (short j = 0; j <= Cols-1; j++)
    {
        Sum += arr[Rows][j];
    }
    return Sum;
}
void PrintEachRowSum(int arr[3][3],short Rows,short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        cout << "ROW " << i + 1 << " Sum = " << SumRow(arr, i, Cols) << endl;
    }
 
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    FllMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    cout << "\nThe the following are the sum of each row in the matrix:\n";
    PrintEachRowSum(arr, 3, 3);


    return 0;
}

