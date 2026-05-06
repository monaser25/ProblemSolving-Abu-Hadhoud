// Convert Record To Line.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string PhoneNumber;
	double AccountBalance;
};
sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number : ";
	getline(cin, Client.AccountNumber);

	cout << "Enter Pin Code : ";
	getline(cin, Client.PinCode);

	cout << "Enter Name : ";
	getline(cin, Client.Name);

	cout << "Enter Phone Number : ";
	getline(cin, Client.PhoneNumber);

	cout << "Enter Account Balance : ";
	cin >> Client.AccountBalance;

	return Client;
}
string ConvertRecordToLine(sClient Client,string Seperator="#//#")
{
	string stClientRecord = "";

	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.PhoneNumber + Seperator;
	stClientRecord += to_string(Client.AccountBalance) ;

	return stClientRecord;
}

int main()
{

	sClient Client;
	Client = ReadNewClient();

	cout << "\n\nClient Record for Saving is: \n";
	cout << ConvertRecordToLine(Client);


	system("pause>0");

	return 0;


}


