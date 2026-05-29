// Show All Clients.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

string ClientsFileName = "Client.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
vector<string> SpiltString(string S1, string Delim)
{
	vector<string> vString;
	short pos;
	string sWord;
	
	

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord!="")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1!="")
	{
		vString.push_back(S1);
	}

	return vString;
}
sClient ConvertLineToRecord(string Line, string Seperator = "#//#")
{
	sClient Client;
	vector<string> ClientData;
	ClientData = SpiltString(Line, Seperator);
	
	Client.AccountNumber = ClientData[0];
	Client.PinCode = ClientData[1];
	Client.Name = ClientData[2];
	Client.Phone = ClientData[3];
	Client.AccountBalance = stod(ClientData[4]);

}
vector<sClient> LoadClientsDataFromFile(string ClientsFileName)
{
	vector <sClient> vClients;
	fstream Myfile;
	Myfile.open(ClientsFileName, ios::in);
	if (Myfile.is_open())
	{
		string Line;
		sClient vClient;
		while (getline(Myfile, Line))
		{
			vClient = ConvertLineToRecord(Line);
			vClients.push_back(vClient);
		}
	}



}
void PrintClientRecord(sClient Client)
	{
		cout << "| " << setw(15) << left << Client.AccountNumber;
		cout << "| " << setw(10) << left << Client.PinCode;
		cout << "| " << setw(40) << left << Client.Name;
		cout << "| " << setw(12) << left << Client.Phone;
		cout << "| " << setw(12) << left << Client.AccountBalance;
	}
void PrintAllClientsData(vector <sClient> vClients)
	{
		cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")Client(s).";
			cout <<
			"\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;
		cout << "| " << left << setw(15) << "Accout Number";
		cout << "| " << left << setw(10) << "Pin Code";
		cout << "| " << left << setw(40) << "Client Name";
		cout << "| " << left << setw(12) << "Phone";
		cout << "| " << left << setw(12) << "Balance";
		cout <<
			"\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;
		for (sClient Client : vClients)
		{
			PrintClientRecord(Client);
			cout << endl;
		}
		cout <<
			"\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;
	}

int main()
{
		
	vector <sClient> vClinets = LoadClientsDataFromFile(ClientsFileName);

	system("pause>0");
	return 0;
}