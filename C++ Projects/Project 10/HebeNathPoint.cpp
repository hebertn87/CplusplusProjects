//Nathan Hebert 3/8/16
//This is the cpp file for the point class
#include <iostream>
#include "HebeNathPoint.h"

//Namespace Hebert
namespace Hebert
{
	//Explicit value constructor  with defualt arguments
	Point::Point(double x, double y)
	{
		x_ = x;
		y_ = y;
	}

	//Sets x
	void Point::setX(double x)
	{
		x_ = x;
	}

	//Sets y
	void Point::setY(double y)
	{
		y_ = y;
	}

	//Returns x
	double Point::getX() const
	{
		return x_;
	}

	//Returns y
	double Point::getY() const
	{
		return y_;
	}

	//Output operator
	ostream & operator<<(ostream & out, Point & right)
	{	
		out << "(" << right.x_ << "," << right.y_ << ")";
		return out;
	}
}