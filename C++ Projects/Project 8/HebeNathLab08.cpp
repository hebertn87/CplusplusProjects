//Nathan Hebert
//2/23/16
#include "HebeNathSavings.h"
#include <iostream>
using namespace std;
using namespace Hebert;

//This is the main driver function
int main()
{
	//Variables and objects
	int initial;
	double interest;
	SavingsAccount s1, s2;

	//Welcome message. This also allows the user to input the interest rate
	cout << "Welcome to the program. This program allows you to calculate your monthly interest rate.\n";
	cout << "Please enter the first interest rate, as a decimal point.\n";
	cin >> interest;
	s1.setInterestRate(interest);

	//First Account
	cout << "Please enter the first Initial value.\n";
	cin >> initial;
	cout << "Your first account balance is: ";
	s1.calcMonthlyInterest(initial);

	//Second Account
	cout << "\nPlease enter the second Initial value.\n";
	cin >> initial;
	cout << "\nYour second account balance is: ";
	s2.calcMonthlyInterest(initial);

	//This sets the static interest rate to a new interest rate
	cout << "Please set a new interest rate for the second month: ";
	cin >> interest;
	s2.setInterestRate(interest);

	//Output for the second month
	cout << "\nYour first balance in the second month is: ";
	s1.SecondMonth();
	cout << "\nYour second balance in the second month is: ";
	s2.SecondMonth();

	cout << endl; //Ends the line
	
	return 0;
}