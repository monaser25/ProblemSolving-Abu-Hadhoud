// SumEachColinMatrixinArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void FillMatrix(int arr[3][3], int Rows, int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++) 
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}
void PrintMatrix(int arr[3][3], int Rows, int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++) 
        {
            cout <<setw(3)<< arr[i][j] << " ";
        }
        cout << endl;
    }
}
int ColSum(int arr[3][3], int arrRows, int Cols)
{
    int sum = 0;
    for (short i = 0; i < arrRows; i++)
    {
        sum += arr[i][Cols];
    }
    return sum;
}
void SumEachCol(int arr[3][3],int arrSum[3], int Rows, int Cols)
{
    for (short i = 0; i < Cols; i++)
    {
        arrSum[i] = ColSum(arr, Rows, i);
    }
}
void PrintArray(int arrSum[3],short length)
{
    cout << "\nThe the following are the sum of each col in the matrix:\n";
    for (short i = 0; i < length; i++)
    {
        cout << "Sum Of COl " << i + 1 << " = " << arrSum[i] << endl;
    }

}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arrSum[3];

    FillMatrix(arr, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);
    SumEachCol(arr,arrSum, 3, 3);
    PrintArray(arrSum,3);

    return 0;
}
