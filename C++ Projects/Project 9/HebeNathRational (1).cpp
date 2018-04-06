//Nathan Hebert 01/26/2016
#include "HebeNathRational.h"
#include <iostream>
#include <cmath>
using namespace std;

//This is namepace Hebert
namespace Hebert
{
	//This is the constructor, which defaults the class variables to 0
	Rational::Rational()
	{
		numerator_ = 0;
		denominator_ = 0;
	}

	//This function sets the numerator to for the class
	void Rational::setRational(Rational & r)
	{
		numerator_ = r.numerator_;
		denominator_ = r.denominator_;
		getReduce(); //Reduces
	}

	//This is the input operator function
	istream &operator>>(istream & in, Rational & second)
	{
		char slash;

		//If statement that steps through the num, gets rid of the /, and gets denom
		in >> second.numerator_;
		if (in.peek() == '/')
		{
			slash = in.get();
			if (!isspace(in.peek()))
			{
				in >> second.denominator_;
				if (!in.good())
				{
					second.denominator_ = 1;
				}
			}

			//This allows the user to input negatives in denom
			if (second.denominator_ < 0)
			{
				second.numerator_ = - second.numerator_; 
				second.denominator_ = - second.denominator_;
			}
		}

		second.getReduce(); //Reduces rational

		return in;
	} 

	//Output operator function
	ostream &operator<<(ostream & out, const Rational & second)
	{
	 	out << second.numerator_ << "/" << second.denominator_;
		return out;
	}

	//This function allows the change of an object of type Rational to a double
	Rational::operator double() 
	{
		return static_cast<double>(numerator_) / static_cast<double>(denominator_);
	}

	//Addition operator overload
	Rational Rational::operator+(const Rational & second)
	{
		Rational temp;
		
		temp.numerator_ = (second.numerator_*denominator_) + (second.denominator_*numerator_);
		temp.denominator_ = (denominator_ *second.denominator_);

		temp.getReduce(); //Reduce function

		return temp;
	}

	//Subtraction operator overload
	Rational Rational::operator-(const Rational & second)
	{
		Rational temp;

		temp.numerator_ = (second.denominator_*numerator_) - (second.numerator_*denominator_);
		temp.denominator_ = (denominator_ *second.denominator_);

		temp.getReduce(); //Reduce function

		return temp;
	}

	//Multiplication operator overload
	Rational Rational::operator*(const Rational & second)
	{
		Rational temp;

		//Multiplier logic
		temp.numerator_ = second.numerator_ * numerator_;
		temp.denominator_ = second.denominator_ * denominator_;

		temp.getReduce(); //Reduce function

		return temp;
	}

	//Division operator overload
	Rational Rational::operator/(const Rational & second)
	{
		Rational temp;

		//Division logic
		temp.numerator_ = second.denominator_ *numerator_;
		temp.denominator_ = second.numerator_ * denominator_;
	
		//If the new denom is negative it flips the sign to the top
		if (temp.denominator_ < 0)
		{
			temp.numerator_ = -temp.numerator_;
			temp.denominator_ = -temp.denominator_;
		}

		temp.getReduce(); //Reduce function

		return temp;
	}

	//Relational Greater than function
	bool Rational::operator> (const Rational & second)
	{
		//If both numerator and denominator are greater than, the other, it returns true
		if (denominator_ > second.denominator_ && numerator_ > second.numerator_)
			return true;
		else
			return false;
	}

	//Relational Less than function
	bool Rational::operator< (const Rational & second)
	{
		//If both numerator and denominator are less than, the other, it returns true
		if (denominator_ < second.denominator_ && numerator_ < second.numerator_)
			return true;
		else
			return false;
	} 

	//Relational Is equal to function
	bool Rational::operator== (const Rational & second)
	{
		//Is equal to if condition
		if (second.numerator_ == numerator_ && second.denominator_ == denominator_)
			return true;
		else
			return false;
	}

	//Relational Greater than or equal to function
	bool Rational::operator>= (const Rational & second)
	{
		//Greater than or equal to condition
		if (denominator_ >= second.denominator_ && numerator_ >= second.numerator_)
			return true;
		else
			return false;
	}

	//Relational less than or equal to function
	bool Rational::operator<= (const Rational & second)
	{
		//Less than or equal to condition
		if (denominator_ <= second.denominator_ && numerator_ <= second.numerator_)
			return true;
		else
			return false;
	}

	//Relational not equals operator function
	bool Rational::operator!= (const Rational & second)
	{
		//Not equal to condition
		if (second.numerator_ != numerator_ || second.denominator_ != denominator_)
			return true;
		else
			return false;
	}

	//This function reduces the fraction to lowest terms.
	void Rational::getReduce()
	{
			//This loop accounts for negatives as well.
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
}