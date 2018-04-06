//Nathan Hebert 01/11/2016
//This program gets a fraction from the user, and displays it in lowest terms
#include <iostream>
#include <cmath>
using namespace std;

//This structure contains the numerator and denominator.
struct Fraction
{
	int numerator;
	int denominator;
};


//Function Declarations
Fraction getFraction();
Fraction reduceFraction(Fraction & f);
void displayFraction(Fraction & f);


//This is the main driver function
int main()
{
	//Variables
	Fraction f;

	//Welcome Message
	cout << "Welcome user. This program asks you to enter a numerator and denominator it will simplify the fraction.\n";
	cout << "Note that the user can put in an improper fraction as well. the reduced however, will stay improper.\n";

	//Function call
	f = getFraction();
	reduceFraction(f);
	displayFraction(f);

	return 0;
}


//This function allows the user to input a numerator and a denominator.
Fraction getFraction()
{
	//structure variable
	Fraction f;

	//Input for numerator
	cout << "Pleaser Enter a numerator.\n";
	cin >> f.numerator;
	f.numerator = abs(f.numerator); //Absolute value 

	//Input for denominator
	cout << "Please enter a denominator.\n";
	cin >> f.denominator;

	//While loop that verifies no negatives or zeros in denominator
	while (f.denominator <= 0)
	{
		cout << "You entered a negative or a zero, please keep your denominator positive.\n";
		cin >> f.denominator;
	}

	return f;
}


//This function reduces the fraction to lowest terms.
Fraction reduceFraction(Fraction & f)
{

	//Variables
	Fraction fraction = f;

		//These statements determine the greatest common factor when the numerator is larger
		if (f.numerator > f.denominator)
		{
			for (int smaller = f.denominator; smaller > 1; smaller--)
			{
				if (f.numerator % smaller == 0 && f.denominator % smaller == 0)
				{
					f.numerator /= smaller;
					f.denominator /= smaller;
					break;
				}
			}

		}

		//These statements determine the greatest common factor when the denominator is larger
		if (f.denominator > f.numerator)
		{
			for (int smaller = f.numerator; smaller > 1; smaller--)
			{
				if (f.denominator % smaller == 0 && f.numerator % smaller == 0)
				{
					f.numerator /= smaller;
					f.denominator /= smaller;
					break;
				}
			}
		}
	

	return f;
}


//This function displays the fraction in lowest terms.
void displayFraction(Fraction & f)
{
	//Verify that they put in a fraction to put it back in the answer.
	char answer;
	cout << "Did you put a negative in the fraction? Y/N\n";
	cin >> answer;

	//If statement for either yes or no, changes whether or not there is a negative at the beginning of the numerator
	if (answer == 'Y' || answer == 'y')
		cout << "Your reduced fraction is: \n-" << f.numerator << endl << "-----" << endl << " " <<  f.denominator << endl;
	
	if (answer == 'n' || answer == 'n')
		cout << "Your reduced fraction is: \n " << f.numerator << endl << "-----" << endl << " " << f.denominator << endl;
}