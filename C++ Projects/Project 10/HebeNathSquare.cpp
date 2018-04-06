//Nathan Hebert 3/8/16
//This file is the Square class.cpp file
#include <iostream>
#include "HebeNathSquare.h"
using namespace std;

//This is namespace Hebert
namespace Hebert
{
	//Explcit value constructor
	Square::Square(double side, Point lowerleft)
	{
		side_ = side;
		lowerleft_ = lowerleft;
	}

	//Function to set the side
	void Square::setSide(double side)
	{
		side_ = side;
	}
	
	//Function to set the lower left point of the square
	void Square::setlowerleft(Point lowerleft)
	{
		lowerleft_ = lowerleft;
	}

	//Returns the side
	double Square::getSide() const
	{
		return side_;
	}

	//Returns the lowerleft point
	Point Square::getlowerleft() const
	{
		return lowerleft_;
	}

	//Ouptut operator function
	ostream & operator<<(ostream & out, const Square & right)
	{
		out << right.side_;
		out << right.getlowerleft();
		return out;
	}
}
