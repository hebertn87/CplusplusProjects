//Nathan Hebert
//2/23/16
#include <iostream>
#include <iomanip>
#include "HebeNathSavings.h"
using namespace std;

//This is namespace Hebert
namespace Hebert
{
	//Initializes the value for the static member variable
	double SavingsAccount::interestRate_ = 0;

	//Constructor
	SavingsAccount::SavingsAccount()
	{
		balance_ = 0;
	}

	//This function calculates monthly interest and outputs the balance
	void SavingsAccount::calcMonthlyInterest(int initial)
	{
		double newRate;
		newRate = (initial * interestRate_) / 12;
		balance_ = newRate + initial;
		cout << "$" << setprecision(2) << fixed << balance_;
	}
	
	//This function sets the interest rate input by the user to the static interest rate.
	void SavingsAccount::setInterestRate(double interest)
	{
		interestRate_ = interest;
	}

	//This function calculates the second months balance
	void SavingsAccount::SecondMonth()
	{
		double newRate;
		newRate = (balance_ * interestRate_) / 12;
		balance_ = newRate + balance_;
		cout << "$" << setprecision(2) << fixed << balance_;
	}
}