//Nathan Hebert
//3/15/16
//This file is for the square class
#include <iostream>
#include"HebeNathSquare.h"
using namespace std;

namespace Hebert
{
	//Constructor
	Square::Square(double side)
	{
		side_ = side;
	}

	//Sets side length
	void Square::setSide(double side)
	{
		side_ = side;
	}

	//Returns side
	double Square::getSide() const
	{
		return side_;
	}

	//Gets area
	double Square::getArea() const
	{
		return side_ * side_;
	}

	//Gets perimeter
	double Square::getPerimeter() const
	{
		return 4 * side_;
	}

	//Prints class data
	void Square::print() const
	{
		cout << "\nShape: Square";
		cout << "\nSide: " << side_;
		cout << "\nArea: " << getArea();
		cout << "\nPerimeter: " << getPerimeter() << endl;
	}


}