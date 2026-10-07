#include<iostream>
using namespace std;


class clsCalculator
{
private :

	float _Result=0;
	float _LastNumber = 0;
	float _PreviousResult = 0;
	string _Lastoperation = "Clear";


protected:
	void setResult(float result)
	{
		_Result = result;
	}
	float getResult()
	{
		return _Result;
	}
	__declspec(property(get = getResult, put = setResult))float Result;


	void setLastNumber(float lastnumber)
	{
		_LastNumber = lastnumber;
	}
	float getLastNumber()
	{
		return _LastNumber;
	}
	__declspec(property(get = getLastNumber, put = setLastNumber))float LastNumber;


	void setPreviousResult(float pre_result)
	{
		_PreviousResult = pre_result;
	}
	float getPreviousResult()
	{
		return _PreviousResult;
	}
	__declspec(property(get = getPreviousResult, put = setPreviousResult))float PreviousResult;


	void setLastoperation(string lastop)
	{
		_Lastoperation = lastop;
	}
	string getLastoperation()
	{
		return _Lastoperation;
	}
	__declspec(property(get = getLastoperation, put = setLastoperation))string Lastoperation;
public:
	
	void Add(float Number)
	{
		LastNumber = Number;
		PreviousResult = Result;
		Lastoperation = "Adding";
		Result += Number;
		
	}
	void Subtract(float Number)
	{
		LastNumber = Number;
		PreviousResult = Result;
		Lastoperation = "Substracting";
		Result -= Number;
	}
	void Multiply(float Number)
	{
		LastNumber = Number;
		PreviousResult = Result;
		Lastoperation = "Multiplaying";
		Result *= Number;
	}
	void Divide(float Number)
	{
		if (Number==0)
		{
			Number = 1;
		}
		LastNumber = Number;
		PreviousResult = Result;
		Lastoperation = "Dividing";
		Result /= Number;
	}
	float GetFinalResults()
	{
		return Result;
	}
	void Clear()
	{
		LastNumber = 0;
		PreviousResult = 0;
		Lastoperation = "Clear";
		Result = 0;
	}
	void CancelLastOperation()
	{
		LastNumber = 0;
		Lastoperation = "Cancelling Last Operation";
		Result = PreviousResult;
	}
	void PrintResult()
	{
		cout << "Result After "
			<< Lastoperation << " "
			<< LastNumber
			<< " is: "
			<< GetFinalResults()
			<< endl;
	}
};

int main()
{

	clsCalculator Calculator1;
	Calculator1.Clear();
	Calculator1.Add(10);
	Calculator1.PrintResult();
	Calculator1.Add(100);
	Calculator1.PrintResult();
	Calculator1.Subtract(20);
	Calculator1.PrintResult();
	Calculator1.Divide(0);
	Calculator1.PrintResult();
	Calculator1.Divide(2);
	Calculator1.PrintResult();
	Calculator1.Multiply(3);
	Calculator1.PrintResult();
	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();
	Calculator1.Clear();
	Calculator1.PrintResult();

	system("pause");
	return 0;
}