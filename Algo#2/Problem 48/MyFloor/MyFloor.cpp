#include <iostream>
using namespace std;

int MyFloor(float Number)
{
	if (Number > 0)
	{
		return int(Number);
	}
	else
	{
		return int(Number) - 1;
	}

}

float ReadNumber()
{
	float Number;
	cout << "Enter a number: ";
	cin >> Number;
	return Number;
}

int main()
{
	float Number = ReadNumber();
	int Result = MyFloor(Number);
	cout << "The floor of " << Number << " is: " << Result << endl;
	cout << "The floor of c++ " << Number << " is: " << floor(Number) << endl;
	return 0;
}