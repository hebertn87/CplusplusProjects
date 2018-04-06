//Nathan Hebert 01/26/2016
#include "HebeNathRational.h"
#include <iostream>
#include <cmath>
using namespace std;

//This is the constructor, which defaults the class variables to 0
Fraction::Fraction()
{
	numerator_ = 0;
	denominator_ = 0;
}

//This function sets the numerator to for the class
void Fraction::setNumerator(int num)
{
	numerator_ = abs(num);
}

//This fraction sets the denominator for the class
void Fraction::setDenominator(int denom)
{
	denominator_ = denom;
}


//This function reduces the fraction to lowest terms.
void Fraction::getReduce()
{

	//These statements determine the greatest common factor when the numerator is larger
	if (numerator_ > denominator_)
	{
		for (int smaller = denominator_; smaller > 1; smaller--)
		{
			if (numerator_ % smaller == 0 && denominator_ % smaller == 0)
			{
				numerator_ /= smaller;
				denominator_ /= smaller;
				break;
			}
		}

	}

	//These statements determine the greatest common factor when the denominator is larger
	if (denominator_ > numerator_)
	{
		for (int smaller = numerator_; smaller > 1; smaller--)
		{
			if (denominator_ % smaller == 0 && numerator_ % smaller == 0)
			{
				numerator_ /= smaller;
				denominator_ /= smaller;
				break;
			}
		}
	}


}


//This function displays the fraction in lowest terms.
void Fraction::getOutput() const
{

	//Verify that they put in a fraction to put it back in the answer.
	char answer;
	cout << "Did you put a negative in the fraction? Y/N\n";
	cin >> answer;

	//If statement for either yes or no, changes whether or not there is a negative at the beginning of the numerator_erator
	if (answer == 'Y' || answer == 'y')
		cout << "Your reduced fraction is: \n-" << numerator_ << endl << "-----" << endl << " " << denominator_ << endl;

	if (answer == 'n' || answer == 'n')
		cout << "Your reduced fraction is: \n " << numerator_ << endl << "-----" << endl << " " << denominator_ << endl;
}