//Nathan Hebert
//3/15/16
//This cpp file is for the rectangle class
#include <iostream>
#include "HebeNathRectangle.h"
using namespace std;

namespace Hebert
{
	//Constructor
	Rectangle::Rectangle(double length, double width)
	{
		length_ = length;
		width_ = width;
	}

	//Sets length
	void Rectangle::setLength(double length)
	{
		length_ = length;
	}

	//sets width
	void Rectangle::setWidth(double width)
	{
		width_ = width;
	}
	
	//returns length
	double Rectangle::getLength() const
	{
		return length_;
	}

	//gets width
	double Rectangle::getWidth() const
	{
		return width_;
	}

	//gets area
	double Rectangle::getArea() const
	{
		return length_ * width_;
	}
	
	//Gets perimeter
	double Rectangle::getPerimeter() const
	{
		return 2 * (length_ + width_);
	}

	//Print function
	void Rectangle::print() const
	{
		cout << "\nShape: Rectangle";
		cout << "\nLength: " << length_;
		cout << "\nWidth: " << width_;
		cout << "\nArea: " << getArea();
		cout << "\nPerimeter: " << getPerimeter() << endl;
	}
}