//Nathan Hebert 01/26/2016
//This program takes a class called Fraction, and reduces it, if necessary.
#include "HebeNathRational.h"
#include <iostream>
using namespace std;
using namespace Hebert;

//This is the main driver function
int main()
{
	//Class variable and int variables
	Rational r1, r2;
	double fraction = 0.0;

	//Welcome Message
	cout << "Welcome user. \nThis program asks you to enter two rational numbers, \nand it will simplify the fraction.\n"
	 	 << "You can also add, subtract, multiply, and divide.\n";
	

	//Enter a rational
	cout << "Please enter your first rational number:";
	cin >> r1;

	//Input for r2
	cout << "\nPlease enter your second rational number:";
	cin >> r2;


	//Outputs reduced functions
	cout << "\nYour new reduced functions are: " << r1 << "\nAnd:" << r2;


	//Function call
	r1.setRational(r1);
	r2.setRational(r2);


	//Convert to type double for first rationals
	cout << "\n\nYour first real number is: ";
	fraction = r1;
	cout << fraction;

	//Convert to tye doulb efor second rationals
	cout << "\nYour second real number is: ";
	fraction = r2;
	cout << fraction;


	//Ouptuts the rational numbers with math operators used
	cout << "\n\nThe first rational added with the second is: " << r1 + r2 << endl;
	cout << "The first rational subtracted with the second is: " <<  r1 - r2 << endl;
	cout << "The first rational multiplied by the second is: " << r1 * r2 << endl;
	cout << "The first rational divided by the second is: " << r1 / r2 << endl << endl;


	//Greater than condition
	cout << "Is this the first rational greater than the second?\n";
	if (r1 > r2)
		cout << r1 << " Is greater than " << r2 << endl << endl;
	else
		cout << r1 << " Is not greater than " << r2 << endl << endl;


	//Less than condition
	cout << "Is this the first rational less than the second?\n";
	if (r1 < r2)
		cout << r1 << " Is less than " << r2 << endl << endl;
	else
		cout << r1 << " Is not less than " << r2 << endl << endl;


	//Greater than or equal to condition
	cout << "Is this the first rational greater than or equal to the second?\n";
	if (r1 >= r2)
		cout << r1 << " Is greater than or equal to " << r2 << endl << endl;
	else
		cout << r1 << " Is not greater than or equal to " << r2 << endl << endl;
	

	//Less than or equal to condition
	cout << "Is this the first rational less than or eqaul to the second?\n";
	if (r1 <= r2)
		cout << r1 << " Is less than or equal to " << r2 << endl << endl;
	else
		cout << r1 << " Is not less than or equal to " << r2 << endl << endl;


	//Is equal to condition
	cout << "Is this the first rational equal to the second?\n";
	if (r1 == r2)
		cout << r1 << " Is equal to " << r2 << endl << endl;
	else
		cout << r1 << " Is not equal to " << r2 << endl << endl;


	//Not equal to condition
	cout << "Is this the first rational not equal to the second?\n";
	if (r1 != r2)
		cout << r1 << " Is not equal to " << r2 << endl << endl;
	else
		cout << r1 << " Is to " << r2 << endl << endl;

	return 0;
}