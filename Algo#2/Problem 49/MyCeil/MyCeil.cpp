#include <iostream>
using namespace std;



float MyCeil(float Number)
{
	int IntegerPart = (int)Number;
	if (Number > IntegerPart)
	{
		 return ++IntegerPart;
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
	
	cout << "The ceiling of " << Number << " is: " << MyCeil(Number) << endl;
	cout << "The ceiling c++   " << Number << " is: " << ceil(Number) << endl;


	return 0;
}