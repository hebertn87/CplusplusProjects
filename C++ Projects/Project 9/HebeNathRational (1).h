//Nathan Hebert 01/26/2016
//This class creates a fraction reduces it to smallest terms
#ifndef HEBENATHRATIONAL_H
#define HEBENATHRATIONAL_H
#include <iostream>
using namespace std;

//This is namespace hebert
namespace Hebert
{
	class Rational
	{
	//Public class members
	public:
		Rational(); //Constructor
		void setRational(Rational &); //Sets num and denom
		
		 /************************  These are operator overloads  **************************/
			friend istream & operator>>(istream &, Rational &); //Overloaded input operator
			friend ostream & operator<<(ostream &, const Rational &); //Overloaded output operator
			operator double(); //Conversion to double 
			Rational operator+(const Rational &); //Addition operator
			Rational operator-(const Rational &); //Subtraction operator
			Rational operator*(const Rational &); //Multiply operator
			Rational operator/(const Rational &); //Divide operator
			bool operator> (const Rational &); //Greater than operator
			bool operator< (const Rational &); //Less than operator
			bool operator== (const Rational &); //Equals*2 operator
			bool operator>= (const Rational &); //Greater than or Equal to operator
			bool operator<= (const Rational &); //Less than or equal to operator               
			bool operator!= (const Rational &); //Not equal to operator                        
		 /**********************************************************************************/

	//Private class members
	private:
		int numerator_; //Numerator
		int denominator_; //Denominator
		void getReduce(); //This function reduces the fraction
	};
}
#endif