#include <iostream>
#include <cmath>
using namespace std;


float MySqrt(float number)
{
	return pow(number, 0.5);
}

float Readnumber()
{
	float num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}

int main()
{
	float num = Readnumber();

	cout << "My MySqrt Result : " << MySqrt(num) << endl;
	cout << "My MySqrt Result : " << sqrt(num) << endl;



	return 0;
}