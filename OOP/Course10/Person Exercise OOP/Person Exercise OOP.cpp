#include <iostream>
using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	clsPerson(int ID,string FirstName,string LastName,string Email,string Phone)
	{
		_ID = ID;
		pFirstName = FirstName;
		pLastName = LastName;
		pEmail = Email;
		pPhone = Phone;
	}
	int getID()
	{
		return _ID;
	}
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	string getFirstName()
	{
		return _FirstName;
	}
	__declspec(property(get = getFirstName, put = setFirstName))string pFirstName;
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	string getLastName()
	{
		return _LastName;
	}
	__declspec(property(get = getLastName, put = setLastName))string pLastName;
	void setEmail(string Email)
	{
		_Email = Email;
	}
	string getEmail()
	{
		return _Email;
	}
	__declspec(property(get = getEmail, put = setEmail))string pEmail;

	void setPhone(string Phone)
	{
		_Phone = Phone;
	}
	string getPhone()
	{
		return _Phone;
	}
	__declspec(property(get = getPhone, put = setPhone))string pPhone;
	string FullName()
	{
		return pFirstName + " " + pLastName;

	}
	void SendEmail(string Subject, string Body)
	{
		cout << "The Following Message Sent Successfully To Email : " << pEmail << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
	}
	void SendSMS(string TextMessage)
	{
		cout << "The Following Message Sent Successfully To Phone : " << pPhone << endl;
		cout  << TextMessage << endl;
	}

	void Print()
	{
		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID : " << getID();
		cout << "\nFirstName: " << pFirstName;
		cout << "\nLastName : " << pLastName;
		cout << "\nFull Name: " << FullName();
		cout << "\nEmail : " << pEmail;
		cout << "\nPhone : " << pPhone;
		cout << "\n___________________\n";
	}
};

int main()
{
	clsPerson Person1(10, "Mohammed", "Abu-Hadhoud","my@gmail.com","0098387727");
	Person1.Print();
	Person1.SendEmail("Hi", "How are you?");
	Person1.SendSMS("How are you?");




	system("pause");
	return 0;
}