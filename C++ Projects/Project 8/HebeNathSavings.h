//Nathan Hebert
//2/23/16
#ifndef HEBENATHSAVINGS_H
#define HEBENATHSAVINGS_H

//This is namespace hebert
namespace Hebert
{
	//This class is the Savings account class
	class SavingsAccount
	{
	//Public Members
	public:
		SavingsAccount();
		void calcMonthlyInterest(int);
		static void setInterestRate(double);
		void SecondMonth();

	//private data Members
	private:
		static double interestRate_;
		double balance_;
	};
}
#endif