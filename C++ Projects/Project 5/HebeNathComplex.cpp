//Nathan Hebert 2/2/16
#include "HebeNathComplex.h"
#include <iostream>
using namespace std;

//This is namespace Hebert
namespace Hebert
{
	
	//Constructor
	Complex::Complex(double a, double b)
	{
		//Sets passed valeus of 0 to real and imaginary as default
		real_ = a;
		imaginary_ = b;
	}

	//Sets input to data member real
	void Complex::setReal(double a)
	{	
		//Sets real to value from user input
		real_ = a;	
	}

	//Sets input to data member imaginary
	void Complex::setImaginary(double b)
	{
		//Sets imaginary to value from user input
		imaginary_ = b;
	}

	//Returns the value of real when this function is called below in getAddition
	double Complex::getReal() const
	{
		return real_;
	}

	//Returns the value of imaginary when this function is called below in getAddition
	double Complex::getImaginary() const
	{
		return imaginary_;
	}

	//Adds the two complex numbers, and returns the object
	Complex Complex::getAddition(Complex c1) const
	{
		//Object variable
		Complex c;

		//Adds the two numbers together, and puts them into a and b
		double a = (real_ + c1.getReal());
		double b = (imaginary_ + c1.getImaginary());

		//This sets the value of a and b to the class data members
		c.setReal(a);
		c.setImaginary(b);

		return c;
	}

	//Subtraccts the two complex numbers, and returns the object
	Complex Complex::getSubtraction(Complex c1) const
	{
		//Object variable
		Complex c;

		//Subtracts the two numbers together, and puts them into a and b
		double a = (c1.getReal() -real_);
		double b = (c1.getImaginary() - imaginary_);

		//This sets the value of a and b to the class data members
		c.setReal(a);
		c.setImaginary(b);

		return c;
	}

	//Prints the complex number
	void Complex::getPrint() const
	{
		cout << real_ << " + " << imaginary_ << "i ";
	}

}