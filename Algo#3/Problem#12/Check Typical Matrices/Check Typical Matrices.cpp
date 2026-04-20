// Check Typical Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
        for (short j = 0; j < Cols; j++) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
bool CheckTypicalMatrices(int arr1[3][3],int arr2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0;  j < Cols;  j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3];
    FillMatrix(arr1, 3, 3);
    cout << "Matrix 1 " << endl;
    PrintMatrix(arr1, 3, 3);
    FillMatrix(arr2, 3, 3);
    cout << "Matrix 2 " << endl;
    PrintMatrix(arr2, 3, 3);

    if (CheckTypicalMatrices(arr1,arr2,3,3))
    {
        cout << "Matrices are Typical" << endl;
    }
    else
    {
        cout << "Matrices are Not Typical" << endl;
    }

    return 0;
}


