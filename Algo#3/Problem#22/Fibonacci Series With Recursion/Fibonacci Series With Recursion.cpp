// Fibonacci Series With Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void PrintFibonacciUsingRecurssion(int Number ,int Prev1 ,int Prev2)
{
	int FibNumber = 0;
	if (Number > 0)
	{
		FibNumber = Prev1 + Prev2;
		cout << FibNumber << " ";
		Prev2 = Prev1;
		Prev1 = FibNumber;
		PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
	}
	 
}
int main()
{
	int Prev1 = 0;
	int Prev2 = 1;
	PrintFibonacciUsingRecurssion(10, Prev1, Prev2);

	system("pause>0");
}


