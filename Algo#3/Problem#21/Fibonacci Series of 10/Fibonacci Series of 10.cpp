// Fibonacci Series of 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

void PrintFibonacciSeries(int Number)
{
	if (Number == 0)return;
	int FibNumber = 0;
	int Prev2 = 0, Prev1 = 1;
	cout << Prev1 <<" ";
	for (int i = 1; i < Number; i++)
	{
		FibNumber = Prev1 + Prev2;
		cout << FibNumber << " ";
		Prev2 = Prev1;
		Prev1 = FibNumber;
	}
}
int main()
{

	int number = 1;
	cout << "Enter a Number" << endl;
	cin >> number;

	PrintFibonacciSeries(number);

	system("pause>0");

}
