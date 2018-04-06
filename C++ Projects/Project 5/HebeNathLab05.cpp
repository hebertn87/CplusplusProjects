//Nathan Hebert 2/2/16
//Preprocessor directives
#include <iostream>
#include "HebeNathComplex.h"

//Namespaces
using namespace std;
using namespace Hebert;

//This is the main driver function.
	int main()
	{
		//Variables
		Complex c1, c2, c3;
		double a = 0, b = 0;
		char answer;
		
		//Welcome message
		cout << "Welcome to this Program.\nThis program will allow you to put in 4 numbers,\n2 real, and 2 imaginary numbers, and will\neither add or subtract them, depending on your choice.\n";
	
		//Input for first set of complex numbers
		cout << "Please enter your first real number.\n";
			cin >> a;
		cout << "\nPlease enter your first imaginary number.\n";
			cin >> b;

		//Sets a and b to real_ and imaginary_ in the c1 object
		c1.setReal(a);
		c1.setImaginary(b);

		//Second set of complex numbers
		cout << "Please enter your second real number.\n";
			cin >> a;
		cout << "\nPlease enter your second imaginary number.\n";
			cin >> b;

		//Sets a and be to real_ and imaginary_ in the c2 object
		c2.setReal(a);
		c2.setImaginary(b);

		//Input an operator
		cout << "Please choose an operator: + or - :";
		cin >> answer;

		//If statement asking for + or -.
		if (answer == '+')
		{
			//Calls addition and sets it to object c3
			c3 = c2.getAddition(c1);
		}

		else if (answer == '-')
		{
			//Calls subtraction and sets it to object c3
			c3 = c2.getSubtraction(c1);
		}

		//Outputs the equation with the answer on the screen as ( a + bi ) - or + ( a + bi ) = (a + bi)
		cout << "( ";
		c1.getPrint();

		cout << " ) " << answer << " ( ";
		c2.getPrint();

		cout << " ) = "; 
		c3.getPrint(); 

		cout << endl;
		

		return 0;
	}