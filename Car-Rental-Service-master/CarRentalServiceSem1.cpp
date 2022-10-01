#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
//Header Files
using namespace std;
//Structures
struct Economy {
	string name;
	int model;
	float rate;

};
struct EconomyPlus {
	string name;
	int model;
	float rate;

};
struct Business {
	string name;
	int model;
	float rate;

};
//Functions

void reciept(int& days, int price, string name, int model) //Value passed through reference
{
	cout << "Your Reciept Number is : " << rand() % 1022881 + 1272788 << endl;
	cout << "Car Name" << setw(20) << "Car Model" << setw(10) << "Rate" << setw(10) << "Days" << endl;
	cout << name << setw(15) << model << setw(10) << price << setw(10) << days << endl;
	int* tptr, total;

	total = days * price;
	tptr = &total; //Use of pointers
	cout << "Your Total is Rs. " << *tptr << endl;


	cout << "Please collect your keys from the counter" << endl;
	cout << "We wish you Bon Voyage" << endl;
}
int main()
{


	cout << "Inorder to rent a car, Please create an account" << endl;

	string fname, lname;
	double cnic, phone;
	string password;
	int age;
	cout << "Name : ";
	cin >> fname >> lname;
	cout << "Age : ";
	cin >> age;
	if (age < 18)
	{
		cout << "You are not eligible to drive " << endl;
		return 0;
	}
	cout << "CNIC : ";
	cin >> cnic;
	cout << "Phone : ";
	cin >> phone;
	cout << "Set a password :";
	cin >> password;
	cout << "REGISTRATION COMPLETED" << endl;


	double phone2;
	string pass2;
invalid:
	cout << "Please Log In To Continue" << endl;
	cout << "Phone Number : ";
	cin >> phone2;
	cout << "Password : ";
	cin >> pass2;
	if (phone2 != phone || pass2 != password)
	{
		cout << "Invalid Username or Password";
		goto invalid;
	}
	Economy ECars[3];
	EconomyPlus PCars[3];
	Business BCars[3];

	ECars[0].name = "Daihatsu-Coure";
	ECars[0].model = 2005;
	ECars[0].rate = 1500;
	ECars[1].name = "Suzuki-Mehran";
	ECars[1].model = 2007;
	ECars[1].rate = 1700;
	ECars[2].name = "Hyundai-Santro";
	ECars[2].model = 2008;
	ECars[2].rate = 1800;

	PCars[0].name = "Honda-City";
	PCars[0].model = 2017;
	PCars[0].rate = 3000;
	PCars[1].name = "Toyota-Corolla";
	PCars[1].model = 2018;
	PCars[1].rate = 3500;
	PCars[2].name = "Honda-Civic";
	PCars[2].model = 2019;
	PCars[2].rate = 4000;

	BCars[0].name = "Toyota-Prado";
	BCars[0].model = 2019;
	BCars[0].rate = 5000;
	BCars[1].name = "Toyota-Land Cruiser";
	BCars[1].model = 2019;
	BCars[1].rate = 5500;
	BCars[2].name = "Audi-A7";
	BCars[2].model = 2019;
	BCars[2].rate = 6000;

	int days;
	char choice;
	cout << "Welcome to ADMWQ Car Dealership" << endl;
	cout << "Greetings " << fname << " " << lname << endl;
inv:
	cout << "Please choose your preffered category : " << endl
		<< "1. Econony (Price Range = Rs.1500 - 1800 per day)" << endl
		<< "2. Economy+ (Price Range = Rs.3000 - 4000 per day)" << endl
		<< "3. Business (Price Range = Rs.5000-6000 per day)" << endl;
	cin >> choice;
	if (choice == '1')
	{
		cout << "The cars that are offered in this category are " << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << ". " << ECars[i].name << endl;
		}
		int choice2;
	invalid1:
		cout << "Choose your preferred car : ";
		cin >> choice2;
		if (choice2 > 3 || choice2 < 1)
		{
			cout << "Invalid Choice ";
			goto invalid1;
		}
		cout << "Name : " << ECars[choice2 - 1].name << endl;
		cout << "Model : " << ECars[choice2 - 1].model << endl;
		cout << "Rate (per day) : " << ECars[choice2 - 1].rate << endl;

		cout << "For how many days is the car required by you?" << endl;
		cin >> days;

		receipt(days, ECars[choice2 - 1].rate, ECars[choice2 - 1].name, ECars[choice2 - 1].model);

	}
	else if (choice == '2')
	{
		cout << "The cars that are offered in this category are " << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << ". " << PCars[i].name << endl;
		}
		int choice2;
	invalid2:
		cout << "Choose your preferred car : ";
		cin >> choice2;
		if (choice2 > 3 || choice2 < 1)
		{
			cout << "Invalid Choice ";
			goto invalid2;
		}
		cout << "Name : " << PCars[choice2 - 1].name << endl;
		cout << "Model : " << PCars[choice2 - 1].model << endl;
		cout << "Rate (per day) : " << PCars[choice2 - 1].rate << endl;

		cout << "For how many days is the car required by you?" << endl;
		cin >> days;

		receipt(days, PCars[choice2 - 1].rate, PCars[choice2 - 1].name, PCars[choice2 - 1].model);
	}
	else if (choice == '3')
	{
		cout << "The cars that are offered in this category are " << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << ". " << BCars[i].name << endl;
		}
		int choice2;
	invalid3:
		cout << "Choose your preferred car : ";
		cin >> choice2;
		if (choice2 > 3 || choice2 < 1)
		{
			cout << "Invalid Choice ";
			goto invalid3;
		}
		cout << "Name : " << BCars[choice2 - 1].name << endl;
		cout << "Model : " << BCars[choice2 - 1].model << endl;
		cout << "Rate (per day) : " << BCars[choice2 - 1].rate << endl;

		cout << "For how many days is the car required by you?" << endl;
		cin >> days;

		receipt(days, BCars[choice2 - 1].rate, BCars[choice2 - 1].name, BCars[choice2 - 1].model);
	}
	else
	{
		cout << "Invalid Choice " << endl;
		goto inv;
	}
	return 0;

}
