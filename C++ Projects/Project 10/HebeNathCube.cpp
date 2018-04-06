//Nathan Hebert 3/8/16
//This is the cpp file for the Cube class
#include <iostream>
#include "HebeNathCube.h"
using namespace std;

//This is namespace Hebert
namespace Hebert
{
	//Cube explicit value with default arguments constructor
	Cube::Cube(double side, Point lowerleft)
	{
		Square::Square(side, lowerleft);
	}

	//returns the Area
	double Cube::getArea() const
	{
		return getSide() * 6;
	}

	double Cube::getVolume() const
	{
		return getSide() * getSide() * getSide();
	}

	ostream & operator<<(ostream & out, const Cube & right)
	{
		cout << "Area: ";
		out << right.getArea();

		cout << "\nVolume: ";
		out << right.getVolume();

		return out;
	}
}