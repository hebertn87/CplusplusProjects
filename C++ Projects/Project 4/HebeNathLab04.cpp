//Nathan Hebert 01/26/2016
//This program takes a class called Fraction, and reduces it, if necessary.
#include "HebeNathRational.h"
#include <iostream>
using namespace std;

//This is the main driver function
int main()
{
	//Class variable and int variables
	Fraction f;
	int num = 0, denom = 0;

	//Welcome Message
	cout << "Welcome user. This program asks you to enter a numerator and denominator it will simplify the fraction.\n";

	//Input for Numerator
	cout << "Pease enter a numerator\n";
	cin >> num;

	//Input for denominator
	cout << "\nPlease enter a denominator\n";
	cin >> denom;

	//While loop that verifies no negatives or zeros in denominator
	while (denom <= 0)
	{
		cout << "\nYou entered a negative or a zero, please keep your denominator positive.\n";
		cin >> denom;
	}


	//Function call
	f.setNumerator(num);
	f.setDenominator(denom);
	f.getReduce();
	f.getOutput();

	return 0;
}