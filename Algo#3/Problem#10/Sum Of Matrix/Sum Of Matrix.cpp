// Sum Of Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>

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
        for (short j = 0; j < Cols; j++) 
        {
            arr[i][j] = RandomNumber(1, 5);
        }
    }
}
int SumofMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++) 
        {
            Sum += arr[i][j];
        }
    }
    return Sum;
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
    srand((unsigned)time(NULL));
    int arr[3][3];

    FillMatrix(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    cout << "Sum of Matrix = "<< SumofMatrix(arr, 3, 3);
}
