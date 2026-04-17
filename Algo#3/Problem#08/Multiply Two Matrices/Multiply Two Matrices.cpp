// Multiply Two Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int ranNum = rand() % (To - From + 1) + From;
    return ranNum;
}

void FillMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++) 
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }

}
void MultiplyTwoArray(int arr1[3][3],int arr2[3][3],int arrRes[3][3],short Rows,short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrRes[i][j] = arr1[i][j] * arr2[i][j];
        }
    }


}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++) 
        {
            cout << setw(5) << arr[i][j] << " ";
        }
        cout << endl;
    }

}
int main()
{
    srand((unsigned)time(NULL));
    int Arr1[3][3], Arr2[3][3], Arr3[3][3];
    FillMatrix(Arr1, 3, 3);
    FillMatrix(Arr2, 3, 3);

    MultiplyTwoArray(Arr1, Arr2, Arr3, 3, 3);
    cout << "Matrix one " << endl;
    PrintMatrix(Arr1, 3, 3);
    cout << "Matrix Two " << endl;
    PrintMatrix(Arr2, 3, 3);
    cout << "Matrix one Multiply Two" << endl;
    PrintMatrix(Arr3, 3, 3);
    
}

